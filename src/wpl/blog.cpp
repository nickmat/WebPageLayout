/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Name:        src/wpl/blog.cpp
 * Project:     WebPageLayout: Command line program to create Website.
 * Purpose:     Process blog markdown files.
 * Author:      Nick Matthews
 * Created:     24th December 2022
 * Copyright:   Copyright (c) 2022, Nick Matthews.
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

#include <boost/filesystem.hpp>

#include <iostream>
#include <string>
#include <vector>

namespace fs = boost::filesystem;

using std::string;

namespace {

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
                std::cout << path.filename() << " [dir]\n";

                out << 
                    "{\n \"folder\": " << path.filename() <<
                    ", \"label\": " << path.filename()
                    ;
                write_blog_layout( out, path.string(), 0 );
                out << "\n}\n";
            }
            else {
                fs::path name = path.filename();
                std::cout << name << " [file]\n";
                std::cout << path.stem() << " [stem]\n";
                std::cout << path.extension() << " [ext]\n";

                if( level != 0 ) {
                    out << ",\n";
                }
                out << "  { \"name\": " << path.stem() << " }";
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
