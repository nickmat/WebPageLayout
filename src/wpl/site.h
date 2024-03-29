/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Name:        src/wpl/site.h
 * Project:     WebPageLayout: Command line program to create Website.
 * Purpose:     Write website header.
 * Author:      Nick Matthews
 * Created:     18th February 2017
 * Copyright:   Copyright (c) 2017..2022, Nick Matthews.
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

#ifndef SRC_WPL_SITE_H_GUARD
#define SRC_WPL_SITE_H_GUARD

#include <string>
#include <vector>
#include <set>

struct Page {
    std::string folder;
    std::string name;
    std::string label;
    bool map_label;
    bool menu;
    std::string title;
    std::string subtitle;
    std::string css_file;
    bool markdown;
    std::vector<Page*> linked;
    std::string depth;
    int level;
    std::string filename;
    Page* parent;
    std::string prev;
    std::string next;

    Page() : map_label(true), menu(false), markdown(false),
        level(0), parent(nullptr) {}
};

struct Site {
    std::string project;
    std::string source;
    std::string target;
    std::string layout_dir;
    std::string blog_dir;
    Page        website;
    Page        sitemap;
    std::string sourceforge_url;
    std::string github_url;
    std::string download_url;
    std::string site_css;
    std::set<std::string> optional_css;
    std::string home_url;
    std::string stats_text;
    std::string color_top;
    std::string color_border;
    bool        logo_shadow;

    Site() : logo_shadow( true ) {}
};

const int g_crumb_step_level = 4;

void write_site(Site& site);

#endif // SRC_WPL_SITE_H_GUARD
