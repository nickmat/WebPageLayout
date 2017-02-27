/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Name:        src/wpl/layout.h
 * Project:     WebPageLayout: Command line program to create Website.
 * Purpose:     Process layout functions header.
 * Author:      Nick Matthews
 * Created:     4th Febuary 2017
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

#ifndef SRC_WPL_LAYOUT_H_GUARD
#define SRC_WPL_LAYOUT_H_GUARD

#include <string>

using std::string;

void process_layout_file( const string& filename, const string& source, const string& target );

#endif // SRC_WPL_LAYOUT_H_GUARD
