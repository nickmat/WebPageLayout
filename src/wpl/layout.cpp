/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Name:        src/wpl/layout.cpp
 * Project:     WebPageLayout: Command line program to create Website.
 * Purpose:     Process layout functions.
 * Author:      Nick Matthews
 * Created:     4th Febuary 2017
 * Copyright:   Copyright (c) 2017 ~ 2018, Nick Matthews.
 * Licence:     Boost
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file license.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

 */

#include "layout.h"

#include "site.h"

#include <boost/filesystem.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree.hpp>

#include <iostream>
#include <string>
#include <vector>

namespace fs = boost::filesystem;
namespace pt = boost::property_tree;

using std::string;

static Page* prev_page = nullptr;

static string markup_html( const string& raw )
{
    string htm;
    for ( const char& ch : raw ) {
        switch ( ch )
        {
        case '&':
            htm += "&amp;";
            break;
        case '<':
            htm += "&lt;";
            break;
        case '>':
            htm += "&gt;";
            break;
        default:
            htm += ch;
            break;
        }
    }
    return htm;
}

void read_page(Page& page, pt::ptree& tree, const string& depth, const string& path, Page* parent, std::set<string>& optcss)
{
	page.folder = tree.get<string>("folder", "");
	page.name = tree.get<string>("name", "");
    if ( page.name.empty() && !page.folder.empty() ) {
        page.name = "index";
    }
    page.label = tree.get<string>( "label", "" );
    if (page.label.empty()) {
        page.label = page.name;
    }
    page.map_label = tree.get<bool>("map-label", true);
	page.menu = tree.get<bool>("menu", !page.folder.empty() );
    string title;
    if (prev_page) {
        title = prev_page->title;
    }
    page.title = tree.get<string>( "title", title );
    page.subtitle = tree.get<string>( "subtitle", page.label );
    page.css_file = tree.get<string>("css", "");
    if ( !page.css_file.empty() ) {
        optcss.insert( page.css_file );
    }
    page.parent = parent;
    string cur_path = path;
    if (!page.name.empty()) {
        if (parent) {
            page.level = parent->level + 1;
        }
        else {
            page.level = 0;
        }
        if (page.folder.empty()) {
            page.depth = depth;
        }
        else {
            if (depth == "-") {
                page.depth = "";
            }
            else {
                page.depth = depth + "../";
                if (!cur_path.empty()) {
                    cur_path += "/";
                }
                cur_path += page.folder;
            }
        }
        if (cur_path.empty()) {
            page.filename = page.name;
        }
        else {
            page.filename = cur_path + "/" + page.name;
        }
        page.filename += ".htm";
        if (prev_page) {
            prev_page->next = page.filename;
            page.prev = prev_page->filename;
        }
        prev_page = &page;
	    if (tree.count("content")) {
		    for (pt::ptree::value_type& c : tree.get_child("content")) {
                Page* p = new Page;
                read_page(*p, c.second, page.depth, cur_path, &page, optcss);
                page.linked.push_back(p);
            }
	    }
        page.label = markup_html( page.label );
        page.title = markup_html( page.title );
        page.subtitle = markup_html( page.subtitle );
    }
}

void process_layout_file( const string& filename, const string& source, const string& target)
{
    std::cout << "Layout file is: \"" << filename << "\"\n";
    fs::path fn_path( filename );
    if ( fn_path.is_relative() ) {
        fn_path = fs::current_path() / fn_path;
    }
    std::cout << fn_path.string() << "\n";

    pt::ptree root;
    pt::read_json( fn_path.string(), root );
    Site site;

    fs::path s_path( source );
    if ( s_path.is_relative() ) {
        s_path = fs::current_path() / s_path;
    }
    site.source = s_path.lexically_normal().string();
    std::cout << "Source folder: " << site.source << "\n";

    fs::path t_path( target );
    if ( t_path.is_relative() ) {
        t_path = fs::current_path() / t_path;
    }
    site.target = t_path.lexically_normal().string();
    std::cout << "Target folder: " << site.target << "\n";

    site.project = root.get<string>("project", "");
    site.sourceforge_url = root.get<string>( "sourceforge-url", "" );
    site.github_url = root.get<string>( "github-url", "" );
    site.download_url = root.get<string>( "download-url", "" );
	site.site_css = root.get<string>("site-css", "");
	site.home_url = root.get<string>("home-url", "");
    site.stats_text = root.get<string>( "stats-text", "" );
    site.color_top = root.get<string>( "color-top", "" );
    site.color_border = root.get<string>( "color-border", "" );
    site.logo_shadow = root.get<bool>( "logo-shadow", true );

    prev_page = nullptr;
	read_page(site.website, root.get_child("site"), "-", "", nullptr, site.optional_css);

	write_site(site);
}

// End of src/wpl/layout.cpp
