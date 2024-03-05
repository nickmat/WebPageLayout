/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Name:        src/wpl/blog.cpp
 * Project:     WebPageLayout: Command line program to create Website.
 * Purpose:     Process blog markdown files.
 * Author:      Nick Matthews
 * Created:     24th December 2022
 * Copyright:   Copyright (c) 2022..2024, Nick Matthews.
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

#include "blog.h"

#include "content.h"

#include <boost/filesystem.hpp>

#include <iostream>
#include <string>
#include <vector>

namespace fs = boost::filesystem;

using std::string;

inline bool starts_with( const string& str, const string& match )
{
    if( str.length() < match.length() ) {
        return false;
    }
    return std::equal( match.begin(), match.end(), str.begin() );
}

namespace {

    void write_blog_layout( std::ostream& out, fs::path& path )
    {
        fs::path blog_index = path / "index.txt";
        fs::ifstream in( blog_index );


        bool home = false;
        bool file = false;
        bool content = false;
        string markdown( ", \"markdown\": true }" );
        for( string line; getline( in, line ); ) {
            if( starts_with( line, "[Folder:] " ) ) {
                string folder = line.substr( 10 );
                write_blog_layout( out, path / folder );
            }
            else if( starts_with( line, "[Home:] " ) && !home ) {
                out << "{ \"folder\": \"" << line.substr( 8 ) << "\"";
                home = true;
            }
            else if( starts_with( line, "[Label:] " ) ) {
                out << ", \"label\": \"" << line.substr( 9 ) << "\"";
            }
            else if( starts_with( line, "[Title:] " ) ) {
                out << ", \"title\": \"" << line.substr( 9 ) << "\"";
            }
            else if( starts_with( line, "[Subtitle:] " ) ) {
                out << ", \"subtitle\": \"" << line.substr( 12 ) << "\"";
            }
            else if( starts_with( line, "[File:] " ) ) {
                if( file ) {
                    out << markdown << ",";
                }
                else {
                    out << ", \"content\": [";
                    file = true;
                }
                out << "\n    { \"name\": \"" << line.substr( 8 ) << "\"";
            }
        }
        if( file ) {
            out << markdown << "\n  ]";
        }
        if( home ) {
            out << "\n}\n";
        }
    }

} // anon namespace


void process_blog( const string& layout_dir, const string& blog_src )
{
    fs::path lay_path( layout_dir );
    fs::path md_path = lay_path / "markdown.json";
    fs::ofstream mds( md_path );

    fs::path blog_dir( blog_src );

    std::cout << "Blog layout: " << md_path << "\n";

    write_blog_layout( mds, blog_dir );
}


// End of src/wpl/blog.cpp
