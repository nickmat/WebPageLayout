/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Name:        src/wpl/version.cpp
 * Project:     WebPageLayout: Command line program to create Website.
 * Purpose:     Version constants.
 * Author:      Nick Matthews
 * Created:     3rd Febuary 2017
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

#include "version.h"


#define VERSION_STATUS   " beta"

#if defined(NDEBUG) || !defined(_DEBUG)
#define VERSION_CONFIG   ""
#else
#define VERSION_CONFIG   " debug"
#endif

#define VERSION_NUM   "0.1.3"


#define VERSION   VERSION_NUM VERSION_STATUS VERSION_CONFIG

/*! A string containing the current full version number.
 */
const char* wm_version = VERSION;

/*! A string containing a long hand version name and copyright message.
 */
const char* wm_title = "WebPageLayout - V" VERSION "\n"
                      "Copyright (c) 2017 ~ 2018 Nick Matthews\n\n";

/*****************************************************************************

 Source code revision history
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

  3feb17  Work started.
 27feb17  v0.1.0  First working version written.
 16apr17  v0.1.1  Remove extra newline when copying content.
 29apr17  v0.1.2  Ensure special characters are escaped (ie & < >).
 21feb18  v0.1.3  Rework the pages using new livery.css style and markup.

*****************************************************************************/

// End of src/wpl/version.cpp
