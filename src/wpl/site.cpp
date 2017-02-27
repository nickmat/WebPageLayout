/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Name:        src/wpl/site.cpp
 * Project:     WebPageLayout: Command line program to create Website.
 * Purpose:     Write website.
 * Author:      Nick Matthews
 * Created:     18th Febuary 2017
 * Copyright:   Copyright (c) 2017, Nick Matthews.
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

#include "site.h"

#include "content.h"

#include <boost/filesystem.hpp>

#include <iostream>

namespace fs = boost::filesystem;

struct Form {
	string head;
    string menu;
	string tail;
    string map_next;
    string map_prev;
};

void create_form(const Site& site, Form& form)
{
	form.head =
		"<!DOCTYPE html PUBLIC '-//W3C//DTD XHTML 1.0 Strict//EN' 'http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd'>\n"
		"<html xmlns='http://www.w3.org/1999/xhtml' xml:lang='en' lang='en'>\n"
		"<head>\n"
		" <title>" + site.project + " - #title#</title>\n"
		" <meta http-equiv='Content-Type' content='text/html; charset=utf-8' />\n"
        " <link rel='icon' type='image/png' href='#depth#" + site.favicon + "' />\n"
		" <link rel='stylesheet' type='text/css' href='#depth#" + site.livery_css + "' />\n"
        "#css-files#"
		"</head>\n"
		"<body>\n\n"
		" <h1>\n"
		"  <a  href='" + site.home_url + "'>\n"
		"   <img id='logo' src='#depth#" + site.full_icon + "' alt='Logo' />\n"
		"  </a>\n"
        "  " + site.project + "#title-1#<br />" + "#sub-title#\n"
		" </h1>\n\n"
        " <div id='page'>\n\n"
        "  <div id='crumbs'>\n"
        "#crumbs#"
        "  </div>\n\n"
		;
    form.menu =
        "  <div id='menu'>\n"
        "#side-menu#"
        "   <p style='text-align: center;'>\n"
        "    The project page at<br />\n"
        "    <a href='http://sourceforge.net/projects/" + site.unix_name + "'>\n"
        "     <img src='#depth#sys/sf-logo-13.jpg'\n"
        "      width='120' height='30'\n"
        "      alt='Get HistoryCal at SourceForge.net.Fast, secure and Free Open Source software downloads'\n"
        "     />\n"
        "    </a>\n"
        "    <a href='http://sourceforge.net/projects/" + site.unix_name + "/files'>\n"
        "     <img src='#depth#sys/download-button.png' alt='Download' />\n"
        "    </a>\n"
        "   </p>\n"
        "  </div>\n\n"
        ;
	form.tail =
        " <hr />\n\n"
        " <div id='valid'>\n"
        "  <p>\n"
        "   <a href='http://validator.w3.org/check?uri=referer'>\n"
        "    <img src='#depth#sys/valid-xhtml10.png' alt='Valid XHTML 1.0 Strict' height='31' width='88' />\n"
        "   </a>\n"
        "  </p>\n"
        " </div>\n\n"
        " <div id='create-date'>#create-date#</div>\n\n"
        + get_file_contents(site.stats_text) + "\n"
        " </div>\n\n"
		"</body>\n"
		"</html>\n"
		;
}

string replace_text(const string& str, const string& old_str, const string& new_str)
{
    size_t pos = str.find(old_str);
    if (pos == string::npos) {
        return str;
    }
    return str.substr(0, pos) + new_str + str.substr(pos + old_str.length());
}

string replace_text_all(const string& str, const string& old_str, const string& new_str)
{
    string result;
    size_t pos, pos2 = 0;
    for (;;) {
        pos = str.find(old_str, pos2);
        result += str.substr(pos2, pos - pos2);
        if (pos == string::npos) {
            break;
        }
        result += new_str;
        pos2 = pos + old_str.length();
    }
    return result;
}

string make_css_link(const Page& page)
{
    string link;
    if (!page.css_file.empty()) {
        link =
            " <link rel='stylesheet' type='text/css' href='"
            + page.depth + page.css_file + "' />\n"
            ;
    }
    return link;
}

string make_crumb(const string& file, int level, const string& css_class, const string& label)
{
    string level_str;
    if (level) {
        level_str = " level" + std::to_string(level);
    }
    return "   <a href='" + file + "' class='m-item" + css_class + level_str + "'>"
        + label + "</a>\n";
}

string get_prev_crumb(Page* page, const string& depth)
{
    if (page == nullptr) {
        return "";
    }
    string crumb = get_prev_crumb(page->parent, depth);
    crumb += make_crumb(depth + page->filename, page->level, "", page->label);
    return crumb;
}

string make_menu_item(Page* page, const string& depth)
{
    string item;
    if (page->name.empty()) {
        return "   <span class='m-item'>" + page->label + "</span>\n";
    }
    return "   <a href='" + depth + page->filename + "' class='m-item'>"
        + page->label + "</a>\n";
}

void output_map_line(fs::ofstream& outfile, const Page& page)
{
    if (page.name.empty()) {
        return;
    }
    outfile << "<tr>";
    for (int i = 0; i < page.level; i++) {
        outfile << "<td style='padding-right: 1.5em;'><hr style='border-top: dashed 2pt;' /></td>";
    }
    outfile << "<td><a href='" << page.filename << "' class='m-item'>";
    if (page.map_label ) {
        outfile << page.label;
    }
    else {
        outfile << page.subtitle;
    }
    outfile << "</a></td></tr>\n";
    for (auto p : page.linked) {
        output_map_line(outfile, *p);
    }
}

void write_page(Page& page, Form& form, const Site& site)
{
    if (page.name.empty()) {
        return;
    }
    for (auto p : page.linked) {
        write_page(*p, form, site);
    }
    fs::path path = site.target + "/" + site.website.folder + "/" + page.filename;
    fs::create_directories(path.parent_path());
	fs::ofstream file{path};
    string title = page.title.empty() ? "" : " - " + page.title;
	string head = replace_text(form.head, "#title#", page.label);
    head = replace_text(head, "#title-1#", title);
    head = replace_text(head, "#sub-title#", page.subtitle);
    head = replace_text_all(head, "#depth#", page.depth);
    head = replace_text(head, "#css-files#", make_css_link(page));
    string crumb = get_prev_crumb(page.parent, page.depth);
    crumb += make_crumb(page.name+".htm", page.level, " thispage", page.label);
    if (page.prev.empty()) {
        page.prev = "map.htm";
        form.map_next = page.filename;
    }
    crumb += make_crumb(page.depth + page.prev, 0, " prev", "&lt;&lt;");
    if (page.next.empty()) {
        page.next = "map.htm";
        form.map_prev = page.filename;
    }
    crumb += make_crumb(page.depth + page.next, 0, " next", "&gt;&gt;");
    head = replace_text(head, "#crumbs#", crumb);
    string menu;
    if (page.menu) {
        string menu_items;
        for (auto mpage : page.linked) {
            menu_items += make_menu_item(mpage, page.depth);
        }
        menu_items += "   <a href='" + page.depth + "map.htm' class='m-item'>Site Map</a>\n\n";
        menu = replace_text_all(form.menu, "#depth#", page.depth);
        menu = replace_text(menu, "#side-menu#", menu_items);
    }
    string tail = replace_text(form.tail, "#depth#", page.depth);
    file <<
        head << menu <<
        "<div id='content'" << (menu.empty() ? " class='nomenu'" : "") << ">\n\n"
        ;
    if (page.filename == "map.htm") {
        file << "<h2>Site Map</h2>\n\n<table class='map'>\n";
        output_map_line(file, site.website);
        file << "</table>\n\n";
        tail = replace_text(tail, "#create-date#", todays_date());
    }
    else {
        Content content;
        get_content(content, site.source + "/" + page.filename);
        file << content.text;
        tail = replace_text(tail, "#create-date#", content.create_date);

    }
    file << "</div><!--id=content-->\n\n" << tail;
}

void write_site(Site& site)
{
	Form form;
	create_form(site, form);
	write_page(site.website, form, site);
    site.sitemap.name = "map";
    site.sitemap.label = site.sitemap.subtitle = "Site Map";
    site.sitemap.level = 1;
    site.sitemap.filename = "map.htm";
    site.sitemap.prev = form.map_prev;
    site.sitemap.next = form.map_next;
    site.sitemap.parent = &site.website;
    write_page(site.sitemap, form, site);
}

// End of src/wpl/site.cpp
