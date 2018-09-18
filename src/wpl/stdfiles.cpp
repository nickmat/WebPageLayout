/* ../src/wpl/stdfiles.cpp - File created by file2cpp 1.0.0 */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Name:        files/stdfiles.f2c
 * Project:     WebPageLayout: Command line program to create Website.
 * Purpose:     file2cpp template file for standard website files.
 * Author:      Nick Matthews
 * Created:     12th July 2018
 * Copyright:   Copyright (c) 2018, Nick Matthews.
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

 This template is used to create the src/wpl/stdfiles.cpp file.

*/

#include "stdfiles.h"

const char* g_livery_css =  /* livery.css */
 "body {\n"
 "margin: 0;\n"
 "padding: 0;\n"
 "background-color: #fff;\n"
 "}\n"
 "ul, ol {\n"
 "overflow: hidden;\n"
 "}\n"
 "div.heading {\n"
 "font-size: 32px;\n"
 "font-weight: bold;\n"
 "text-align: center;\n"
 "margin: 0;\n"
 "background: 8px 8px #color-top#;\n"
 "padding: 8px 15px 8px 20px;\n"
 "border-bottom: 4px solid #col-border#;\n"
 "border-right: 2px solid #col-border#;\n"
 "}\n"
 "div.heading div.logo {\n"
 "float: left;\n"
 "padding: 8px;\n"
 "}\n"
 "div.heading img.logo {\n"
 "box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);\n"
 "#heading-logo#\n"
 "}\n"
 "div.clear {\n"
 "clear: both;\n"
 "}\n"
 "div.menu {\n"
 "width: 158px;\n"
 "overflow: hidden;\n"
 "margin: 15px 20px 20px 6px;\n"
 "float: left;\n"
 "border-bottom: 2px solid #999;\n"
 "border-right:  1px solid #999;\n"
 "}\n"
 "div.menu a, div.menu div.m-item {\n"
 "float: left;\n"
 "}\n"
 ".m-item {\n"
 "color: #840;\n"
 "border-bottom: 2px solid #999;\n"
 "border-right:  1px solid #999;\n"
 "padding: 5px 5px 5px 20px;\n"
 "margin:3px 3px 3px 5px;\n"
 "width: 120px;\n"
 "text-decoration: none;\n"
 "font-family: Arial, Helvetica, sans-serif;\n"
 "font-size: 12px;\n"
 "}\n"
 "a.m-item:hover, a.m-item.hover:link, a.m-item.hover:visited, a.m-item.hover:active {\n"
 "background-color: #eee;\n"
 "background-image: url(bullet_hov.png);\n"
 "background-repeat: no-repeat;\n"
 "background-position: left;\n"
 "}\n"
 "a.thispage, a.thispage:hover {\n"
 "background-image: url(bullet_cur.png);\n"
 "background-repeat: no-repeat;\n"
 "background-position: left;\n"
 "}\n"
 "div.menu-plus, div.menu-plus a {\n"
 "width: 160px;\n"
 "text-align: center;\n"
 "}\n"
 "div.crumbs {\n"
 "overflow: hidden;\n"
 "margin: 0 5px;\n"
 "clear: both;\n"
 "}\n"
 "div.crumbs a {\n"
 "float: left;\n"
 "}\n"
 "div.crumbs .dmenu {\n"
 "float: left;\n"
 "overflow: hidden;\n"
 "}\n"
 "div.crumbs .dm-item {\n"
 "background-color: inherit;\n"
 "font-family: inherit;\n"
 "width: 20px;\n"
 "}\n"
 "div.crumbs  .dmenu:hover .dm-item {\n"
 "background-color: #eee;\n"
 "background-image: url(bullet_cur.png);\n"
 "background-repeat: no-repeat;\n"
 "background-position: left;\n"
 "}\n"
 "div.crumbs .dm-content {\n"
 "display: none;\n"
 "position: absolute;\n"
 "margin-left: 10px;\n"
 "background-color: white;\n"
 "box-shadow: 0px 8px 16px 0px rgba(0,0,0,0.2);\n"
 "z-index: 1;\n"
 "}\n"
 "div.crumbs .dm-content a {\n"
 "float: none;\n"
 "display: block;\n"
 "text-align: left;\n"
 "}\n"
 "div.crumbs .dmenu:hover .dm-content {\n"
 "display: block;\n"
 "}\n"
 "div.crumbs .nav {\n"
 "float: right;\n"
 "width: 20px;\n"
 "}\n"
 "div#content {\n"
 "margin: 20px;\n"
 "}\n"
 "blockquote {\n"
 "margin: 0 0 0 35%;\n"
 "font: italic 0.9em \"Times New Roman\", serif;\n"
 "text-align: justify;\n"
 "padding: 10px;\n"
 "border-bottom: 4px solid #col-border#;\n"
 "border-right:  2px solid #col-border#;\n"
 "}\n"
 "blockquote.long {\n"
 "margin-left: 20%;\n"
 "}\n"
 "blockquote.short {\n"
 "margin-left: 65%;\n"
 "}\n"
 "blockquote p {\n"
 "margin: 0;\n"
 "}\n"
 "blockquote p.attribute {\n"
 "text-align: right;\n"
 "}\n"
 "p.img-quote {\n"
 "text-align: right;\n"
 "}\n"
 "p.img-quote img {\n"
 "border-bottom: 4px solid #col-border#;\n"
 "border-right:  2px solid #col-border#;\n"
 "}\n"
 "div.tail {\n"
 "margin: 0;\n"
 "padding: 2px;\n"
 "background: 8px 8px #col-border#;\n"
 "}\n"
 "#create-date {\n"
 "font: italic 1em \"Times New Roman\", serif;\n"
 "margin: 0 10px 0 10px;\n"
 "}\n"
 "#valid {\n"
 "margin: 0 10px 0 10px;\n"
 "float: right;\n"
 "}\n"
 "#valid img {\n"
 "border-style: none;\n"
 "}\n"
 "table.map td {\n"
 "padding: 5px 0 3px 0;\n"
 "}\n"
 "hr.dash {\n"
 "border-top: 1px dotted #e8e8e8;\n"
 "}\n"
 "table.basic {\n"
 "border: 1px solid black;\n"
 "margin: 0.5em 1em;\n"
 "border-collapse: collapse;\n"
 "}\n"
 "table.basic th {\n"
 "background-color: Cornsilk;\n"
 "text-align: center;\n"
 "white-space: nowrap;\n"
 "border: 1px solid black;\n"
 "padding: 0.15em 0.5em 0.15em 0.5em;\n"
 "}\n"
 "table.basic td {\n"
 "background-color: #fffefd;\n"
 "border: 1px solid black;\n"
 "padding: 0.1em 0.5em 0.1em 0.5em;\n"
 "}\n"
 "table.basic td.code {\n"
 "font-family: \"Courier New\", Courier, monospace;\n"
 "}\n"
 "table.basic td.example {\n"
 "background-color: mintcream;\n"
 "font-family: \"Courier New\", Courier, monospace;\n"
 "white-space: pre;\n"
 "}\n"
 "table.data td {\n"
 "white-space: pre;\n"
 "font-family: \"Courier New\", Courier, monospace;\n"
 "}\n"
 "table.data td.note {\n"
 "white-space: normal;\n"
 "font-family: \"Times New Roman\", serif;\n"
 "}\n"
 "table.code {\n"
 "border: 1px solid springgreen;\n"
 "margin: 0.5em 1em;\n"
 "border-collapse: collapse;\n"
 "}\n"
 "table.code th {\n"
 "background-color: Cornsilk;\n"
 "text-align: left;\n"
 "border: 1px solid springgreen;\n"
 "padding: 0.2em 1em;\n"
 "}\n"
 "table.code td {\n"
 "white-space: pre;\n"
 "font-family: \"Courier New\", Courier, monospace;\n"
 "background-color: mintcream;\n"
 "border: 1px solid springgreen;\n"
 "padding: 0.5em 1em 0.75em 1em;\n"
 "}\n"
 "table.code td.compact {\n"
 "padding: 0.1em 0.5em 0.1em 0.5em;\n"
 "}\n"
 "table.code td.note {\n"
 "background-color: #fffefd;\n"
 "white-space: normal;\n"
 "font-family: \"Times New Roman\", serif;\n"
 "}\n"
 "table.code td.note code {\n"
 "background-color: #fffefd;\n"
 "white-space: pre;\n"
 "font-family: \"Courier New\", Courier, monospace;\n"
 "padding: 0;\n"
 "}\n"
 "table.rfloat {\n"
 "display: inline-table;\n"
 "float: right;\n"
 "margin-top: 0;\n"
 "}\n"
 "table.lfloat {\n"
 "display: inline-table;\n"
 "float: left;\n"
 "margin-top: 0;\n"
 "}\n"
 "img.diag {\n"
 "padding: 0;\n"
 "margin: 0.5em 1em;\n"
 "}\n"
 "img.rfloat {\n"
 "float: right;\n"
 "margin-top: 0;\n"
 "}\n"
 "img.lfloat {\n"
 "float: left;\n"
 "margin-top: 0;\n"
 "}\n"
 ".clear {\n"
 "clear: both;\n"
 "}\n"
 ".lclear {\n"
 "clear: left;\n"
 "}\n"
 ".rclear {\n"
 "clear: right;\n"
 "}\n";

const unsigned char g_sf_logo_13_png[] = { /* sf-logo-13.png */
 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,120,
 0,0,0,30,8,3,0,0,0,208,23,42,167,0,0,0,192,80,76,84,
 69,255,255,255,255,254,254,139,139,139,168,169,169,105,106,106,110,111,111,181,
 181,181,244,124,32,68,69,69,255,253,252,252,252,252,245,133,48,248,167,105,
 175,176,176,238,238,238,146,147,147,204,204,204,115,115,115,245,129,41,252,222,
 198,81,82,82,126,126,126,155,156,156,220,220,220,253,230,213,191,191,191,248,
 172,113,212,212,212,196,197,197,132,132,132,128,129,129,226,227,227,143,143,143,
 209,209,209,150,150,150,163,164,164,101,103,103,223,223,223,158,159,159,231,231,
 231,75,76,76,86,87,87,247,247,247,242,242,242,99,100,100,120,120,120,93,
 94,94,124,124,124,230,230,230,235,235,235,246,145,67,255,247,242,122,123,123,
 201,201,201,71,72,72,253,229,211,250,195,152,250,188,141,253,235,221,252,216,
 189,247,155,84,250,201,162,249,179,126,251,204,168,232,50,45,234,0,0,2,
 175,73,68,65,84,72,199,237,149,91,123,162,48,16,134,7,72,32,98,1,
 105,81,234,114,20,116,1,17,60,219,118,219,238,254,255,127,181,147,160,22,
 221,246,121,246,98,87,111,252,110,50,196,132,215,249,102,18,0,110,186,233,
 127,235,241,249,249,245,26,220,167,174,118,255,112,45,174,244,243,174,115,105,
 159,69,190,175,154,118,97,114,195,93,75,223,46,76,110,184,157,213,25,121,
 107,83,219,199,113,20,108,230,27,3,131,193,150,79,151,125,240,104,101,87,
 42,198,122,106,219,52,116,65,165,92,10,68,99,46,138,139,6,99,103,150,
 44,1,92,66,72,53,192,0,204,164,206,157,208,131,37,17,58,114,225,93,
 123,129,54,121,65,23,176,24,0,12,55,25,192,212,74,0,228,33,159,55,
 9,244,250,0,89,101,128,94,89,38,232,91,25,148,239,205,30,151,213,178,
 44,91,144,213,108,28,80,230,184,224,177,89,60,223,21,38,68,5,35,114,
 152,59,211,5,171,99,212,145,251,227,94,91,65,155,108,164,98,152,210,169,
 24,231,189,83,48,108,3,72,227,189,57,31,96,89,140,54,227,14,249,108,
 166,123,204,194,87,49,21,136,152,50,93,88,176,176,229,51,192,155,166,105,
 235,135,22,185,103,151,124,80,247,239,236,89,103,96,53,6,146,125,14,142,
 24,21,143,1,235,9,240,144,169,46,179,247,107,15,224,149,134,22,99,194,
 200,213,158,126,182,115,78,199,241,8,11,235,55,235,151,155,54,184,116,13,
 58,209,103,135,118,80,250,138,162,248,28,76,210,52,205,134,108,208,152,198,
 20,4,79,252,218,49,155,41,85,85,205,5,35,56,76,15,25,63,112,240,
 235,106,13,208,233,106,218,47,177,175,84,237,248,8,54,79,192,105,45,99,
 117,63,192,161,97,24,91,14,222,229,121,62,58,5,59,204,142,48,105,110,
 74,145,179,209,130,161,118,229,193,107,145,241,91,23,185,237,206,214,237,72,
 85,154,112,100,65,162,10,31,109,110,245,132,219,60,51,63,183,122,178,247,
 85,102,62,130,189,162,88,226,84,37,10,199,193,243,147,211,116,199,201,47,
 167,92,128,208,45,169,222,212,107,11,134,37,210,176,68,141,125,91,135,36,
 249,162,185,8,227,230,120,187,98,202,107,188,101,149,4,148,249,231,224,134,
 188,190,187,239,190,116,90,220,4,23,246,168,4,106,80,242,3,139,12,157,
 98,202,30,137,154,230,26,196,80,146,4,255,149,223,151,206,193,145,195,170,
 164,191,203,71,32,154,43,192,174,198,227,20,40,233,152,131,235,1,170,125,
 131,72,39,249,70,33,165,243,136,159,138,126,63,156,27,18,70,89,72,198,
 118,143,95,41,248,32,133,42,44,227,25,33,193,4,12,210,92,32,110,110,
 53,155,51,185,96,14,254,0,158,131,8,115,86,155,184,182,96,57,85,245,
 204,17,106,187,125,238,179,164,31,163,63,167,14,210,191,186,15,165,191,253,
 58,173,206,185,23,250,46,174,30,175,194,5,128,107,113,97,253,252,252,126,
 13,238,77,55,253,107,253,6,154,10,67,187,190,95,211,237,0,0,0,0,
 73,69,78,68,174,66,96,130
};
size_t g_sizeof_sf_logo_13_png = sizeof(g_sf_logo_13_png);

const unsigned char g_github_logo_png[] = { /* github_logo.png */
 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,73,
 0,0,0,30,8,2,0,0,0,239,154,164,196,0,0,0,6,116,82,78,
 83,0,192,0,192,0,192,141,120,187,186,0,0,0,9,112,72,89,115,0,
 0,53,211,0,0,53,211,1,12,33,67,119,0,0,5,110,73,68,65,84,
 88,133,237,88,105,108,20,101,24,126,103,118,118,102,217,171,237,206,246,76,
 151,0,221,163,135,9,180,165,5,106,228,136,26,68,9,1,42,106,72,64,
 195,81,90,40,182,20,16,36,252,212,120,16,130,65,229,50,42,16,73,99,
 11,53,81,35,71,236,145,96,160,72,219,8,137,176,165,109,40,199,86,203,
 236,46,236,108,119,103,175,206,248,227,43,211,237,116,143,106,49,90,210,231,
 215,147,121,159,239,123,223,39,243,126,199,12,214,210,210,2,79,41,240,255,
 186,128,127,17,147,222,38,38,38,189,77,76,16,209,2,28,199,93,185,212,
 106,181,90,157,14,199,32,207,43,20,10,90,79,27,141,198,162,226,226,41,
 202,41,99,79,192,243,188,195,225,64,60,41,41,137,32,134,51,218,237,118,
 65,16,0,64,171,213,82,20,21,119,42,191,223,207,178,44,0,96,24,166,
 215,235,227,234,35,123,107,189,220,122,236,240,17,55,235,30,29,90,176,112,
 65,101,245,219,0,112,227,247,27,223,157,105,208,233,116,107,222,90,171,86,
 171,163,37,184,119,247,222,142,234,26,196,119,239,221,83,56,187,16,113,142,
 227,42,54,108,66,124,221,198,245,75,94,121,57,110,173,23,206,158,63,121,
 252,4,226,167,234,106,73,146,140,173,143,224,237,234,149,95,15,236,219,207,
 243,124,196,1,89,38,35,0,4,131,193,143,63,248,200,51,48,0,0,56,
 142,111,218,92,14,0,110,183,123,96,96,0,0,8,130,72,78,78,126,60,
 66,8,27,45,192,56,32,252,205,225,82,111,126,159,255,216,225,163,162,49,
 165,82,57,115,214,76,29,77,163,214,186,101,237,204,201,203,5,128,64,32,
 224,245,122,145,230,209,163,71,136,52,212,159,249,241,251,31,0,32,53,45,
 245,179,35,135,198,99,227,137,64,234,237,151,139,23,197,90,243,158,201,219,
 249,238,46,149,74,53,122,152,74,165,90,245,218,170,211,117,245,26,141,166,
 116,85,169,52,60,174,215,243,196,32,245,214,209,222,49,20,32,136,173,213,
 85,17,141,33,44,91,190,236,133,197,47,202,9,66,49,69,186,181,240,60,
 207,121,189,0,64,41,20,99,47,197,239,247,35,34,151,203,113,28,71,243,
 4,131,65,0,192,48,76,178,186,120,158,239,238,234,238,179,217,8,130,48,
 91,44,250,228,8,91,139,212,91,239,237,219,136,100,231,100,211,122,58,70,
 41,101,235,54,162,182,92,81,186,114,110,201,220,83,39,191,233,180,118,162,
 16,195,48,107,87,175,1,128,170,154,106,195,84,131,56,196,97,119,216,238,
 219,16,247,249,124,225,179,57,157,206,242,245,101,136,87,84,110,89,244,252,
 34,0,56,247,211,217,227,95,126,13,0,56,142,159,170,171,13,215,111,175,
 218,246,160,255,1,226,56,142,175,124,181,244,245,213,111,196,242,198,243,252,
 67,231,67,196,13,83,167,34,210,211,221,211,209,222,30,46,155,87,82,146,
 105,200,228,133,161,206,19,4,225,222,221,251,215,175,93,31,237,95,16,70,
 116,231,23,71,142,141,214,12,41,121,65,24,158,144,151,60,228,121,94,50,
 149,104,12,69,79,215,213,207,200,154,81,52,167,56,170,183,80,40,20,10,
 133,16,23,187,209,122,243,102,93,237,183,225,178,212,180,180,76,67,102,248,
 19,109,130,118,218,244,105,78,167,147,117,177,0,64,16,4,18,104,181,218,
 104,102,198,137,194,162,217,185,121,185,15,250,251,47,156,187,128,108,159,63,
 123,46,150,55,12,195,68,30,26,12,141,61,83,126,65,126,126,65,254,137,
 175,142,163,125,82,71,235,246,29,216,143,66,119,122,123,135,147,17,4,134,
 15,167,8,6,130,99,79,17,14,146,36,119,237,217,141,170,117,185,216,214,
 75,151,1,160,167,187,71,34,27,225,141,32,8,138,162,208,74,112,58,156,
 232,161,209,104,92,186,108,41,231,229,26,127,110,252,103,165,136,216,190,107,
 103,248,217,253,230,234,53,227,156,16,0,204,22,51,242,230,241,120,130,193,
 160,92,46,23,67,210,247,150,154,150,122,167,247,14,0,116,90,173,130,32,
 96,24,102,201,201,182,228,100,51,12,51,126,111,24,54,162,53,158,8,70,
 236,159,35,207,30,233,93,217,100,49,35,210,255,103,127,71,91,59,252,239,
 193,113,28,34,132,156,144,17,178,240,144,212,219,115,243,231,139,252,224,39,
 7,155,27,155,92,46,151,207,231,123,232,116,198,77,35,190,18,159,207,23,
 237,202,22,119,44,0,136,247,216,193,193,193,104,122,113,219,236,186,213,133,
 136,94,175,71,167,162,8,233,249,150,155,151,91,88,52,187,253,106,27,0,
 120,61,158,67,159,126,62,246,250,18,18,19,17,97,93,236,222,221,123,50,
 13,134,133,139,22,170,212,81,79,255,112,168,53,26,153,76,134,204,52,156,
 105,176,217,108,110,150,189,246,219,181,136,226,64,32,176,109,107,149,217,98,
 113,179,108,251,227,230,202,206,201,145,200,34,124,191,85,86,109,53,154,76,
 49,234,136,182,98,138,230,20,203,100,67,93,209,117,171,171,185,177,169,175,
 239,143,104,147,72,206,43,146,36,103,21,228,35,238,245,120,154,27,155,218,
 174,182,161,75,73,68,244,217,250,90,154,154,69,99,56,142,47,94,242,146,
 68,19,193,155,90,173,126,239,195,247,55,108,42,155,62,99,122,248,210,199,
 113,220,100,54,151,85,148,207,123,182,4,0,82,82,82,116,52,173,163,105,
 141,86,131,4,25,25,25,53,239,236,8,255,178,162,20,148,156,36,117,143,
 65,81,195,87,48,153,76,70,211,52,122,174,84,42,1,160,162,114,243,172,
 130,124,49,163,92,46,159,91,50,111,249,202,21,137,73,137,52,77,99,24,
 166,82,169,144,190,124,75,133,201,108,18,149,9,137,9,85,53,213,89,198,
 44,137,17,44,246,63,60,206,203,49,12,227,247,251,40,74,145,146,154,162,
 24,195,253,80,16,4,59,99,231,56,111,146,78,167,209,104,226,234,37,112,
 179,110,134,97,100,50,60,61,61,131,164,98,125,161,185,89,183,195,97,39,
 73,50,45,61,93,178,210,16,226,120,155,208,120,154,255,151,76,122,155,152,
 152,244,54,49,241,23,237,45,18,99,40,140,71,124,0,0,0,0,73,69,
 78,68,174,66,96,130
};
size_t g_sizeof_github_logo_png = sizeof(g_github_logo_png);

const unsigned char g_download_button_png[] = { /* download-button.png */
 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,105,
 0,0,0,35,8,6,0,0,0,151,65,36,48,0,0,0,6,98,75,71,
 68,0,255,0,255,0,255,160,189,167,147,0,0,0,9,112,72,89,115,0,
 0,0,72,0,0,0,72,0,70,201,107,62,0,0,0,9,118,112,65,103,
 0,0,0,105,0,0,0,35,0,132,128,148,250,0,0,13,128,73,68,65,
 84,104,222,237,219,9,84,85,117,30,7,240,78,219,52,211,140,53,165,105,
 139,229,177,178,209,58,213,120,236,88,110,83,25,154,109,90,142,54,169,169,
 141,136,187,128,34,10,162,146,15,144,77,54,5,20,55,220,80,112,69,69,
 17,151,82,208,50,247,141,69,89,5,53,101,17,225,45,240,222,227,125,231,
 255,189,255,119,121,15,120,149,206,169,57,205,129,123,206,247,240,238,125,247,
 253,239,189,159,223,255,255,191,23,124,222,115,79,203,242,255,185,108,249,174,
 162,221,222,179,186,216,163,185,230,242,147,69,0,115,188,16,56,150,15,124,
 39,114,52,15,56,146,11,100,136,164,95,110,154,195,205,44,142,12,104,67,
 35,90,209,140,118,52,180,122,90,50,114,106,110,173,77,205,78,28,48,216,
 249,77,65,222,74,228,222,59,46,80,218,57,67,44,27,250,161,64,52,158,
 39,15,120,232,18,112,48,27,216,159,5,164,101,2,123,47,2,169,23,128,
 61,34,187,207,3,41,246,57,215,76,99,103,64,19,218,208,136,86,52,163,
 29,13,105,73,83,218,210,152,214,203,182,157,220,35,232,59,139,60,252,139,
 5,58,144,105,76,103,213,217,200,55,162,193,125,153,242,96,187,196,73,36,
 159,1,182,157,6,54,159,4,54,157,0,18,143,3,27,69,54,252,0,36,
 56,202,177,102,146,70,215,189,193,26,218,208,136,86,52,163,29,13,105,73,
 83,218,210,88,41,152,48,79,216,119,185,80,148,160,143,200,35,63,89,160,
 93,167,13,75,56,116,15,100,201,30,176,243,44,176,245,20,144,116,66,30,
 124,237,247,64,252,81,96,69,134,168,124,58,16,119,24,88,114,8,136,101,
 190,5,98,90,162,132,22,52,161,13,141,104,69,51,218,209,144,150,52,165,
 45,141,105,77,115,218,107,98,118,158,22,165,232,237,112,68,173,59,84,209,
 150,195,144,213,229,208,101,213,19,69,67,235,172,133,225,129,120,208,232,111,
 128,168,131,64,196,126,32,108,31,16,154,6,132,236,149,9,110,137,18,213,
 131,54,52,162,21,205,104,71,67,90,210,148,182,52,166,53,205,105,207,26,
 180,239,216,37,196,58,245,53,188,71,109,62,166,139,230,188,201,202,114,104,
 114,24,179,161,184,116,217,120,228,1,96,161,56,104,80,42,16,176,7,240,
 75,1,230,239,2,124,119,2,243,118,200,204,109,137,18,213,131,54,52,162,
 21,205,104,71,67,90,210,52,206,90,44,90,211,156,246,172,129,71,224,250,
 34,81,146,33,214,135,9,187,169,238,172,169,140,59,109,58,41,43,204,225,
 201,161,27,113,64,246,138,128,221,242,128,60,137,217,219,129,89,91,1,207,
 45,162,193,205,192,244,77,50,211,152,164,102,158,77,54,15,218,208,136,86,
 52,163,29,13,105,73,83,218,210,152,214,52,223,100,45,84,98,70,153,89,
 148,68,35,210,169,65,145,196,19,137,133,115,36,171,186,242,136,181,64,251,
 101,245,53,41,242,0,222,219,228,65,121,2,110,137,192,212,141,192,228,13,
 192,164,4,96,98,227,172,111,102,105,116,253,52,161,13,141,104,69,51,218,
 209,144,150,52,165,45,141,105,77,115,218,179,6,41,231,44,16,37,73,16,
 233,213,160,72,124,234,224,147,8,135,31,231,77,86,89,41,144,168,252,156,
 100,96,230,86,121,32,215,141,242,4,38,136,19,115,89,11,140,93,3,140,
 89,45,243,239,150,40,81,61,104,67,35,90,209,140,118,52,164,37,77,105,
 171,20,234,128,52,167,61,107,192,90,112,220,136,56,53,252,229,245,148,28,
 114,188,169,45,58,40,135,35,171,237,147,44,123,128,123,146,236,25,227,215,
 201,131,159,191,138,6,139,69,196,96,4,10,202,228,205,112,116,60,48,124,
 197,239,43,217,63,2,153,215,127,251,227,140,176,102,228,74,96,212,42,121,
 204,188,155,210,142,134,180,164,41,109,105,76,107,154,211,158,53,96,45,68,
 73,82,69,250,55,40,18,111,104,156,47,249,65,206,159,188,233,113,88,206,
 180,22,136,61,129,189,130,61,101,228,42,89,148,159,91,178,196,137,125,177,
 12,24,178,244,247,19,117,249,95,28,107,168,200,231,113,210,64,181,162,29,
 13,105,73,83,218,210,152,247,40,142,40,127,241,51,80,60,96,132,239,255,
 137,34,241,77,22,135,115,40,27,227,1,62,94,12,188,31,9,12,136,2,
 6,197,216,122,200,191,150,217,46,248,83,177,125,96,180,56,177,37,114,88,
 115,200,154,234,228,123,28,194,159,68,255,126,162,46,191,85,251,3,27,133,
 54,131,151,216,142,75,59,206,48,95,197,75,223,207,98,101,232,73,115,218,
 179,6,172,133,195,34,113,216,113,8,18,154,141,177,40,78,17,64,207,96,
 160,171,31,208,101,30,240,252,108,224,57,47,160,131,151,237,192,125,66,100,
 17,237,179,244,176,124,143,83,34,139,172,134,79,59,103,139,129,26,19,160,
 55,202,63,135,240,137,200,126,159,252,82,249,27,184,186,206,11,189,82,1,
 20,149,203,215,234,118,254,93,44,175,84,190,190,116,67,254,6,63,124,185,
 252,44,219,190,173,151,211,198,71,139,109,159,81,151,187,61,167,97,162,221,
 253,226,209,184,76,11,152,235,228,180,126,174,68,78,95,106,39,86,195,142,
 121,163,10,168,53,3,167,175,136,17,21,103,59,238,139,62,50,180,164,41,
 109,105,172,14,0,218,179,6,172,133,195,34,241,185,158,39,231,188,70,86,
 249,195,69,192,219,161,192,27,1,192,43,190,192,11,162,64,237,103,2,109,
 61,128,199,220,109,7,254,195,68,224,193,9,192,67,147,128,86,174,242,253,
 238,11,228,123,85,6,160,111,152,12,159,112,204,117,77,167,69,142,58,215,
 68,219,126,188,167,89,44,178,135,113,157,191,99,168,11,95,115,27,47,170,
 206,34,11,199,117,46,21,58,160,184,162,105,251,252,147,140,218,182,186,220,
 237,57,241,207,59,142,22,118,14,190,255,206,66,224,239,26,192,107,91,211,
 125,178,175,219,94,211,134,134,180,164,41,109,105,76,107,154,211,158,53,96,
 45,28,22,105,110,178,25,110,27,205,24,19,111,198,208,37,102,12,136,52,
 161,79,176,9,221,52,38,116,153,107,66,71,47,19,158,246,48,162,181,155,
 17,143,76,49,214,31,248,129,113,70,220,231,98,196,189,99,109,121,112,156,
 124,159,0,124,239,193,241,70,124,155,35,103,230,196,227,117,232,230,39,218,
 14,50,97,247,57,185,237,100,145,5,239,132,154,148,44,79,151,106,1,41,
 102,101,61,45,211,130,43,229,22,92,191,109,65,218,69,185,159,102,151,89,
 217,103,101,70,157,178,174,46,71,115,45,24,182,204,140,126,225,38,196,126,
 91,87,223,81,212,182,213,69,93,63,85,36,143,191,231,66,157,152,158,76,
 74,82,47,52,61,167,30,11,108,14,35,87,152,144,113,217,82,95,76,251,
 107,63,83,44,183,175,57,90,135,54,238,70,197,236,80,142,237,238,77,59,
 26,114,59,219,98,155,52,166,53,205,105,207,26,176,22,142,139,180,221,8,
 183,13,181,24,179,170,22,67,99,107,48,32,188,6,125,2,13,232,54,223,
 128,46,62,122,116,156,169,199,211,211,244,104,237,170,199,35,147,116,182,34,
 141,213,225,62,103,29,238,29,99,75,135,25,122,229,189,91,58,75,253,54,
 109,141,220,191,141,248,188,186,173,245,84,185,31,223,99,59,15,141,211,41,
 199,226,72,218,114,194,140,39,197,241,202,170,45,88,125,196,132,132,239,77,
 202,235,215,125,13,162,184,102,229,102,60,56,186,6,189,22,24,234,207,229,
 51,177,254,78,176,65,73,255,48,219,246,30,254,6,116,247,179,173,191,236,
 99,64,39,111,61,116,181,114,189,179,88,231,185,240,186,158,241,176,157,147,
 122,93,127,153,168,131,255,46,35,174,222,106,250,184,116,191,221,181,215,154,
 108,215,200,207,242,154,122,218,157,31,237,104,72,75,94,39,109,105,76,107,
 154,211,158,53,96,45,28,79,119,219,107,49,109,67,13,156,87,25,240,121,
 172,1,31,134,235,241,118,160,14,111,204,215,225,21,31,45,94,152,169,69,
 251,233,90,180,117,173,198,99,147,171,109,211,221,216,106,60,224,204,84,41,
 185,95,100,246,86,89,145,35,151,205,202,58,163,171,149,23,216,214,173,186,
 126,219,19,174,213,86,16,75,253,54,38,67,124,142,5,121,203,95,118,134,
 129,81,122,12,90,36,241,222,244,211,41,239,217,183,109,235,48,85,13,218,
 177,65,58,94,191,211,115,218,113,70,234,175,74,55,98,104,140,94,20,89,
 219,164,45,134,159,81,218,115,149,38,180,233,225,111,235,208,220,78,67,90,
 210,148,182,52,166,53,205,105,207,26,176,22,14,139,244,117,114,45,60,18,
 107,224,18,111,192,176,37,6,124,28,169,199,187,193,122,5,229,181,185,58,
 188,228,165,21,35,68,139,167,220,181,104,51,213,86,164,63,141,171,198,67,
 46,213,248,163,248,249,172,135,86,105,195,40,103,35,184,37,212,40,239,49,
 135,115,228,198,213,71,140,120,82,180,193,172,57,34,167,197,131,89,230,250,
 253,152,41,235,100,145,83,207,155,149,222,217,122,138,22,143,139,240,53,183,
 113,153,188,206,214,182,186,216,183,225,104,123,227,245,59,61,39,117,132,208,
 162,205,84,45,2,118,213,218,193,107,29,182,215,206,77,139,142,158,90,236,
 187,104,174,223,151,118,52,164,37,77,217,30,141,105,77,115,218,211,143,181,
 112,88,36,191,29,181,240,76,170,193,132,53,53,248,50,206,128,79,69,207,
 237,23,170,71,175,0,29,186,250,138,105,104,182,22,207,139,30,240,172,232,
 9,79,138,158,87,247,11,191,40,177,167,63,58,169,26,15,143,151,121,79,
 180,101,52,55,221,143,219,250,134,232,235,247,99,158,153,174,173,135,57,36,
 46,92,221,254,77,150,108,128,79,98,79,79,211,214,111,87,23,251,54,28,
 109,111,188,126,167,231,116,182,184,225,211,69,254,205,58,156,44,148,219,62,
 137,148,251,253,89,100,240,98,67,147,182,78,137,253,212,135,19,218,209,144,
 150,52,165,45,141,105,77,115,218,179,6,172,133,195,34,45,16,189,195,123,
 115,141,210,139,191,90,97,192,16,49,172,63,224,148,23,164,67,119,141,28,
 77,127,243,150,189,131,67,118,143,184,47,52,126,50,170,17,157,48,235,90,
 157,152,191,107,149,41,132,69,178,79,255,133,122,164,95,50,67,47,58,34,
 195,158,247,126,152,190,201,126,76,120,90,173,178,207,8,113,242,234,54,190,
 230,182,136,125,181,13,246,205,16,109,30,207,55,55,105,227,88,158,89,137,
 186,254,93,174,89,60,92,152,239,250,156,136,121,190,164,78,185,190,3,153,
 102,5,185,159,248,92,185,214,162,252,180,223,119,252,106,3,10,74,235,148,
 142,148,122,222,132,206,98,223,253,226,51,39,10,204,138,29,13,105,73,83,
 218,210,152,214,52,167,61,107,192,90,56,44,82,240,30,113,195,218,86,11,
 119,49,39,142,229,148,183,212,160,220,11,156,68,165,123,7,200,123,211,171,
 115,100,161,216,27,158,19,83,219,51,211,228,20,193,185,150,121,162,37,74,
 84,15,218,208,136,86,52,163,29,13,105,73,83,218,210,152,214,52,167,61,
 107,192,90,56,44,82,248,94,3,52,201,122,120,38,234,48,105,141,14,163,
 151,105,49,100,113,53,62,10,171,66,223,160,42,244,244,187,141,55,124,111,
 227,53,159,74,116,241,170,68,167,153,149,120,126,70,37,58,76,191,133,103,
 167,201,180,119,111,9,163,122,208,134,70,180,162,25,237,104,72,75,154,210,
 150,198,180,166,57,237,89,3,214,194,97,145,22,239,211,35,112,167,22,62,
 155,171,225,190,190,10,46,43,111,99,68,108,37,6,71,85,226,195,208,91,
 232,187,160,2,189,53,21,232,238,91,142,174,115,202,241,170,119,25,94,158,
 85,134,206,51,203,240,210,140,50,116,154,81,138,23,25,143,102,30,97,64,
 11,154,208,134,70,180,162,25,237,104,72,75,154,210,150,198,180,166,57,237,
 89,131,69,105,58,199,69,138,73,187,93,25,182,71,11,205,246,106,204,74,
 188,141,169,107,42,225,188,252,22,134,199,136,198,34,43,240,81,104,57,156,
 2,203,240,182,127,25,122,206,47,69,247,121,165,232,54,167,20,93,125,110,
 226,117,239,155,120,205,154,87,189,154,119,84,7,154,208,134,70,180,162,25,
 237,104,72,75,154,210,150,198,180,166,57,237,89,131,208,173,69,142,255,169,
 98,193,250,115,155,162,247,86,34,120,199,45,248,110,42,135,231,250,50,76,
 94,117,19,206,75,111,96,196,226,31,49,36,226,58,6,134,94,195,7,129,
 215,224,228,127,21,239,106,74,240,143,175,75,208,107,94,9,122,204,45,198,
 91,115,108,121,179,153,198,222,128,38,180,161,17,173,104,70,59,26,210,146,
 166,180,165,49,173,105,78,123,214,96,184,235,66,163,245,31,253,122,54,40,
 210,187,3,199,188,181,252,64,5,162,118,151,33,112,91,41,230,37,222,128,
 231,218,31,49,117,229,53,184,44,189,138,209,209,37,24,22,89,140,33,11,
 175,96,80,112,17,62,14,44,194,7,1,133,232,239,87,136,126,154,2,56,
 137,188,55,191,37,12,45,104,66,27,26,209,138,102,180,163,33,45,105,74,
 91,26,211,154,230,180,103,13,30,125,188,29,191,218,53,95,228,197,198,95,
 24,106,165,89,158,190,59,46,173,20,145,187,196,135,182,94,135,239,198,107,
 152,181,182,4,238,43,139,49,41,174,8,99,99,10,49,122,81,1,70,68,
 228,227,139,176,124,12,13,205,195,63,67,242,240,89,80,46,62,101,2,115,
 49,168,153,135,6,180,160,9,109,104,68,43,154,209,142,134,180,164,41,109,
 105,76,107,154,211,126,212,180,112,147,245,126,212,244,139,40,214,175,15,117,
 14,73,56,85,16,183,247,58,162,118,94,69,240,214,98,104,18,139,224,179,
 174,16,158,241,249,112,95,158,135,41,75,115,49,33,230,50,92,22,95,194,
 152,168,75,248,42,50,7,163,34,114,48,50,60,91,201,151,97,205,59,170,
 3,77,104,67,35,90,209,140,118,52,164,37,77,105,75,99,90,211,124,118,
 84,138,69,212,32,83,196,215,225,87,186,172,11,191,144,215,219,35,40,233,
 204,242,212,98,68,239,44,66,216,182,2,4,38,229,67,147,144,139,185,107,
 47,195,43,254,18,60,87,228,96,250,178,108,184,45,205,194,212,37,153,152,
 18,155,137,201,49,153,152,164,38,250,162,146,137,205,36,234,245,170,215,79,
 11,154,208,134,70,180,162,25,237,104,72,75,154,210,150,198,180,30,229,22,
 98,178,22,40,220,250,45,214,159,253,186,49,191,226,218,231,169,231,58,133,
 184,120,199,22,46,76,186,96,94,148,156,143,240,45,151,17,156,116,9,1,
 27,178,161,89,159,5,223,181,153,152,187,58,19,62,241,23,49,123,213,69,
 120,175,188,0,47,102,133,45,179,154,73,236,175,153,6,180,160,9,109,104,
 68,43,154,209,142,134,180,164,233,194,196,243,248,210,53,200,248,215,214,237,
 248,61,187,189,214,17,212,251,103,191,102,220,104,68,117,182,206,139,243,173,
 79,26,41,214,185,178,37,191,94,82,172,182,26,171,245,157,125,97,191,209,
 61,170,149,245,9,163,167,245,153,189,127,75,126,213,56,89,191,91,215,233,
 174,255,235,75,203,210,178,180,44,255,197,242,31,203,197,133,14,130,52,66,
 165,0,0,0,37,116,69,88,116,99,114,101,97,116,101,45,100,97,116,101,
 0,50,48,49,50,45,48,52,45,49,56,84,49,56,58,53,49,58,53,57,
 43,48,48,58,48,48,174,46,106,180,0,0,0,37,116,69,88,116,109,111,
 100,105,102,121,45,100,97,116,101,0,50,48,49,50,45,48,52,45,49,56,
 84,49,56,58,53,49,58,53,57,43,48,48,58,48,48,241,159,28,128,0,
 0,0,0,73,69,78,68,174,66,96,130
};
size_t g_sizeof_download_button_png = sizeof(g_download_button_png);

const unsigned char g_valid_xhtml10_png[] = { /* valid-xhtml10.png */
 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,88,
 0,0,0,31,8,3,0,0,0,84,22,250,210,0,0,3,0,80,76,84,
 69,1,0,0,8,6,3,12,9,4,11,11,11,18,14,6,23,18,9,26,
 21,10,20,20,20,28,28,28,37,29,14,43,34,17,48,38,19,54,43,21,
 59,47,23,61,48,24,35,35,35,40,40,40,52,51,50,59,59,59,65,52,
 26,78,62,30,78,75,63,83,66,33,94,75,37,100,80,40,106,84,42,110,
 88,44,117,71,57,116,92,46,126,100,49,78,78,78,82,79,75,86,82,77,
 85,85,85,92,92,92,106,93,74,101,101,101,107,107,107,112,112,112,123,123,
 123,0,90,156,8,95,159,9,96,159,14,99,161,17,101,162,21,104,164,26,
 107,166,30,109,168,33,111,169,37,114,170,41,117,172,49,121,175,54,125,177,
 56,126,178,62,130,180,69,134,182,76,139,186,85,145,189,90,148,191,93,150,
 192,100,155,195,104,157,196,109,161,198,116,165,201,124,170,204,150,4,3,153,
 0,0,156,8,4,136,32,25,157,54,39,160,14,7,183,60,30,166,62,42,
 129,103,51,131,104,52,138,110,54,142,113,56,148,118,59,151,120,60,154,123,
 61,186,66,33,191,76,38,128,121,104,161,114,83,192,78,39,193,80,40,200,
 95,47,208,111,55,214,122,61,216,126,63,138,129,101,163,130,65,174,139,69,
 177,141,70,180,129,88,183,146,73,186,148,74,190,152,76,163,146,107,179,159,
 103,187,166,114,197,157,78,222,138,69,206,164,81,209,167,83,213,170,85,218,
 174,87,222,177,88,227,149,74,230,155,77,233,160,80,237,169,84,226,180,90,
 230,184,92,234,187,93,242,193,96,251,197,98,254,203,101,131,131,131,151,151,
 151,152,152,152,169,165,158,181,173,152,172,172,172,180,180,180,191,191,191,130,
 174,206,133,176,208,139,180,210,144,183,212,150,187,214,152,188,215,155,190,216,
 159,193,218,163,195,219,168,199,221,171,201,222,178,205,225,182,208,227,194,194,
 194,204,204,204,212,212,212,192,214,231,198,218,232,205,223,236,211,227,238,221,
 233,242,255,236,198,231,231,231,236,236,236,229,238,245,233,241,246,238,244,248,
 244,244,244,242,247,250,245,248,251,254,254,254,204,204,204,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 0,0,0,0,0,0,0,0,0,231,226,187,96,0,0,0,158,116,82,78,
 83,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
 255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
 255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
 255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
 255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
 255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
 255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
 255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0,62,
 135,227,248,0,0,0,1,98,75,71,68,255,165,7,242,197,0,0,0,9,
 112,72,89,115,0,0,0,72,0,0,0,72,0,70,201,107,62,0,0,3,
 73,73,68,65,84,72,199,237,150,105,79,19,81,20,134,207,32,139,64,69,
 49,136,86,45,8,74,60,13,173,236,98,9,80,108,53,26,150,226,18,87,
 170,88,21,219,50,162,157,78,175,193,37,74,8,54,69,40,224,2,180,153,
 235,127,245,220,153,14,93,16,89,130,126,242,77,122,102,203,60,51,243,158,
 229,22,22,247,93,111,127,10,193,34,223,94,223,217,206,245,252,233,217,255,
 224,189,129,39,67,42,99,114,72,141,134,162,180,13,198,38,131,164,80,56,
 22,10,210,249,104,40,196,88,112,114,79,224,49,56,193,194,96,137,249,96,
 152,49,11,40,229,32,84,161,0,156,100,172,6,128,41,96,217,4,142,183,
 184,233,238,153,214,25,1,73,217,237,45,164,86,23,231,233,55,77,73,254,
 65,51,172,168,5,127,133,20,102,38,120,34,96,5,107,96,130,192,146,42,
 83,248,45,248,27,58,137,248,5,187,4,56,129,134,6,184,86,7,112,32,
 89,157,52,192,74,49,192,16,35,112,173,207,87,14,10,99,195,226,17,10,
 84,21,249,78,151,88,126,15,230,237,184,66,209,129,235,20,123,208,181,182,
 54,135,206,52,127,15,71,206,31,45,59,176,154,73,158,149,222,77,128,117,
 101,193,53,214,138,162,193,173,192,110,252,72,177,3,227,20,157,248,141,107,
 109,98,183,238,40,185,112,238,124,166,42,194,82,9,88,5,120,72,141,89,
 114,193,97,144,162,91,129,151,176,147,243,117,68,242,117,25,219,201,110,221,
 149,50,113,73,75,103,192,149,82,184,6,158,152,30,71,178,96,102,181,49,
 29,92,225,247,251,99,2,236,241,108,84,69,51,185,240,25,177,153,243,1,
 116,243,117,7,46,83,234,14,230,86,197,32,25,172,20,151,170,102,242,24,
 27,129,17,3,76,210,193,66,81,2,95,241,8,178,1,118,209,167,187,176,
 3,151,200,238,37,222,139,216,159,162,220,229,130,35,50,221,31,141,168,170,
 76,70,43,250,129,76,21,205,244,192,148,8,139,201,66,100,197,85,143,80,
 6,28,71,151,214,124,33,129,238,53,116,208,99,156,136,157,26,159,222,83,
 231,93,247,24,50,192,41,116,204,99,95,202,222,62,135,61,226,120,217,129,
 9,190,176,23,240,205,12,215,236,188,46,242,97,158,119,163,81,25,156,247,
 97,239,31,102,133,26,219,150,107,130,63,33,218,53,170,6,196,148,126,60,
 143,109,249,96,217,34,193,184,113,115,164,10,164,147,121,232,216,141,215,198,
 206,157,13,174,9,94,65,188,36,90,16,47,26,168,4,182,172,26,123,233,
 180,145,60,91,173,9,62,13,163,199,33,144,203,189,230,241,190,202,114,47,
 123,114,135,80,11,206,234,45,56,195,103,123,116,43,186,23,12,114,211,66,
 198,10,155,9,174,44,101,65,176,21,124,191,247,229,6,247,84,222,116,235,
 195,53,189,5,191,82,177,185,83,113,7,198,181,198,31,130,43,37,55,192,
 198,91,170,80,197,162,112,40,203,189,175,243,188,47,12,127,189,183,243,199,
 230,124,135,136,75,173,84,33,78,180,163,104,197,197,178,134,198,195,48,205,
 11,223,184,164,156,201,52,68,115,28,246,100,229,125,92,48,143,181,143,250,
 102,128,126,95,251,157,206,94,145,195,100,67,89,245,123,158,7,30,162,113,
 113,92,138,140,130,63,55,121,119,178,220,87,187,29,244,97,209,176,37,162,
 119,89,64,146,160,92,205,171,178,187,38,119,106,215,43,136,250,100,124,124,
 60,192,38,132,207,242,216,35,181,160,126,239,153,220,125,95,76,31,100,184,
 251,191,74,191,240,234,220,191,176,252,79,77,253,179,255,21,31,182,213,187,
 103,59,215,195,91,38,184,110,7,58,182,149,234,55,157,57,83,95,173,131,
 127,1,153,144,168,134,162,212,148,93,0,0,0,0,73,69,78,68,174,66,
 96,130
};
size_t g_sizeof_valid_xhtml10_png = sizeof(g_valid_xhtml10_png);

// End of files/stdfiles.f2c file
