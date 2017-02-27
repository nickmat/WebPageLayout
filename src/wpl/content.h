/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Name:        src/wpl/content.h
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

#ifndef SRC_WPL_CONTENT_H_GUARD
#define SRC_WPL_CONTENT_H_GUARD

#include <string>

using std::string;

struct Content {
    string text;
    string create_date;
};

string todays_date();
string get_file_contents(const string& filename);
bool get_content(Content& content, const string& filename);

#endif // SRC_WPL_CONTENT_H_GUARD
