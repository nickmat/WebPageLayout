/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Name:        src/wpl/main.cpp
 * Project:     WebPageLayout: Command line program to create Website.
 * Purpose:     Main program control.
 * Author:      Nick Matthews
 * Created:     3rd Febuary 2017
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

#include "layout.h"
#include "version.h"

#include <boost/program_options.hpp>

#include <iostream>
#include <string>

namespace po = boost::program_options;

int main( int argc, char* argv[] )
{
    try {
        string source, target, layout;
        po::options_description desc( string(wm_title) + "Allowed options" );
        desc.add_options()
            ("help,h", "produce help message")
            ("version,v", "state version number")
            ("source", po::value(&source), "path to web pages containing text")
            ("target", po::value(&target), "path to web pages to be rewritten")
            ("layout", po::value(&layout), "layout file")
        ;

        po::variables_map vm;        
        po::store( po::parse_command_line( argc, argv, desc ), vm );
        po::notify( vm );    

        if( vm.count( "help" ) ) {
            std::cout << desc;
            return 0;
        }

        if( vm.count( "version" ) ) {
            std::cout << " " << wm_version << "\n";
            return 0;
        }

        if (layout.empty()) {
            std::cerr << "Layout file not given.\n";
            return 1;
        }
        process_layout_file( layout, source, target );

    } catch( std::exception& e ) {
        std::cerr << "error: " << e.what() << "\n";
        return 1;
    } catch(...) {
        std::cerr << "Exception of unknown type!\n";
    }

    return 0;
}

// End of src/wpl/main.cpp
