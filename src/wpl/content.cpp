/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Name:        src/wpl/content.cpp
 * Project:     WebPageLayout: Command line program to create Website.
 * Purpose:     Read content from existing website.
 * Author:      Nick Matthews
 * Created:     22th Febuary 2017
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

#include "content.h"

#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/filesystem.hpp>

#include <iostream>
#include <sstream>

namespace fs = boost::filesystem;

string todays_date()
{
    using namespace boost::gregorian;
    static const char* month[] = {
        "January", "Febuary", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    date today = day_clock::local_day();
    date::ymd_type ymd = today.year_month_day();
    std::stringstream str;

    str << ymd.day << "<sup>";
    switch (ymd.day)
    {
    case 1: case 21: case 31:
        str << "st";
        break;
    case 2: case 22:
        str << "nd";
        break;
    case 3: case 23:
        str << "rd";
        break;
    default:
        str << "th";
    }
    str << "</sup> " << month[ymd.month-1] << " " << ymd.year;

    return str.str();
}

string get_file_contents(const string& filename)
{
    std::ifstream in(filename);
    std::stringstream sstr;
    sstr << in.rdbuf();
    return sstr.str();
}

bool get_content(Content& content, const string& filename)
{
    content.text = "\n<h2>Page Under Construction</h2>\n\n";
    content.create_date = "<p>" + todays_date() + "</p>";

    string text = get_file_contents(filename);

    size_t pos1 = text.find("<div id=\"content\"");
    if (pos1 == string::npos) {
        pos1 = text.find("<div id='content'");
    }
    if (pos1 == string::npos) {
        return false;
    }
    pos1 = text.find(">", pos1);
    if (pos1 == string::npos) {
        return false;
    }
    pos1 += 2;
    size_t pos2 = text.find("</div><!--id=content-->", pos1);
    if (pos2 == string::npos) {
        pos2 = text.find("</div>\n<hr", pos1);
    }
    if (pos2 == string::npos) {
        pos2 = text.find("</div>\n\n<hr", pos1);
    }
    if (pos2 == string::npos) {
        return false;
    }
    content.text = text.substr(pos1, pos2 - pos1);

    pos1 = text.find("<div id='create-date'>");
    if (pos1 == string::npos) {
        pos1 = text.find("<div id=\"create-date\">");
    }
    if (pos1 == string::npos) {
        return true;
    }
    pos1 += 22;
    pos2 = text.find("</div>", pos1);
    if (pos2 == string::npos) {
        return true;
    }
    content.create_date = text.substr(pos1, pos2 - pos1);

    return true;
}

// End of src/wpl/content.cpp
