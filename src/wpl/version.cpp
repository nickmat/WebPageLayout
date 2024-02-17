/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Name:        src/wpl/version.cpp
 * Project:     WebPageLayout: Command line program to create Website.
 * Purpose:     Version constants.
 * Author:      Nick Matthews
 * Created:     3rd Febuary 2017
 * Copyright:   Copyright (c) 2017..2024, Nick Matthews.
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

#include "version.h"


#define VERSION_STATUS /* "" */ " test"

#if defined(NDEBUG) || !defined(_DEBUG)
#define VERSION_CONFIG   ""
#else
#define VERSION_CONFIG   " debug"
#endif

#define VERSION_NUM   "0.3.0"


#define VERSION   VERSION_NUM VERSION_STATUS VERSION_CONFIG

/*! A string containing the current full version number.
 */
const char* wm_version = "WebPageLayout v" VERSION;

/*! A string containing a long hand version name and copyright message.
 */
const char* wm_title = "WebPageLayout - v" VERSION "\n"
                      "Copyright (c) 2017..2024 Nick Matthews\n\n";

/*****************************************************************************

 Source code revision history
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

  3feb17  Work started.
 27feb17  v0.1.0  First working version written.
 16apr17  v0.1.1  Remove extra newline when copying content.
 29apr17  v0.1.2  Ensure special characters are escaped (ie & < >).
 21feb18  v0.1.3  Rework the pages using new livery.css style and markup.
 18sep18  v0.2.0  Add standard support files.
  1sep21  v0.2.1  Add "Notes", "Warning", "Tips" and "Code" styles to livery.css.
 16jul22  v0.2.2  Update livery.css to give a more modern look.
 18oct22  v0.2.3  Change DOCTYPE to html (html5). Change standard footnote.
  active  v0.3.0  Add markdown formatted blog pages to website.

*****************************************************************************/

// End of src/wpl/version.cpp
