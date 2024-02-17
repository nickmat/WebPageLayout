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

namespace {

    struct BlogHdr {
        string label;
        string title;
        string summary;
    };

    void read_blog_hdr( BlogHdr& hdr, fs::path path )
    {
        string filename = path.lexically_normal().string();
        string text = get_file_contents( filename );

        size_t end = string::npos;
        size_t pos = text.find( "[Label:]" );
        if( pos != string::npos ) {
            pos += 9; // include one space
            end = text.find( "\n", pos );
            if( end != string::npos ) {
                hdr.label = text.substr( pos, end - pos );
            }
        }

        end = string::npos;
        pos = text.find( "[Title:]" );
        if( pos != string::npos ) {
            pos += 9; // include one space
            end = text.find( "\n", pos );
            if( end != string::npos ) {
                hdr.title = text.substr( pos, end - pos );
            }
        }

        end = string::npos;
        pos = text.find( "[Summary:]" );
        if( pos != string::npos ) {
            pos += 11; // include one space
            end = text.find( "[Content:]", pos );
            if( end != string::npos ) {
                hdr.summary = text.substr( pos, end - pos );
            }
        }

        if( hdr.label.empty() ) {
            string fn = path.stem().string();
            assert( fn.length() > 4 );
            hdr.label = fn.substr( 4 );
        }
        if( hdr.title.empty() ) {
            hdr.title = hdr.label;
        }
    }

    void write_blog_layout( std::ostream& out, const string& blog_src, int level )
    {
        bool start_content = false;
        if( level == 0 ) {
            out << ", \"content\": [\n";
            start_content = true;
        }
        for( const auto& file : fs::directory_iterator( blog_src ) ) {
            fs::path path = file.path().lexically_normal();
            std::cout << path << "\n";
            if( fs::is_directory( path ) ) {
                out << 
                    "{\n \"folder\": " << path.filename() <<
                    ", \"label\": " << path.filename() <<
                    ", \"title\": \"Blogs\", \"subtitle\": \"Contents\" "
                ;
                write_blog_layout( out, path.string(), 0 );
                out << "\n}\n";
            }
            else {
                BlogHdr hdr;
                read_blog_hdr( hdr, path );

                if( level != 0 ) {
                    out << ",\n";
                }
                out <<
                    "  { \"name\": " << path.stem() << 
                    ", \"label\": \"" << hdr.label <<
                    "\", \"subtitle\": \"" << hdr.title <<
                    "\", \"markdown\": true }"
                    ;
                level++;
            }
        }
        if( start_content ) {
            out << "\n ]";
        }
    }

} // anon namespace


void process_blog( const string& layout_dir, const string& blog_src )
{
    fs::path lay_path( layout_dir );
    fs::path md_path = lay_path / "markdown.json";

    std::cout << lay_path << " [layout path]\n";
    std::cout << md_path << " [markdown layout file]\n\n";

    fs::ofstream mds( md_path );
    write_blog_layout( mds, blog_src, -1 );
}


// End of src/wpl/blog.cpp
