project(WebPageLayout)
cmake_minimum_required(VERSION 3.5)
set(CMAKE_BUILD_TYPE Release)

set(BOOST_ROOT $ENV{BOOST}) 
set(Boost_USE_STATIC_LIBS ON) 
set(Boost_USE_MULTITHREADED ON)  
find_package(Boost REQUIRED COMPONENTS filesystem program_options date_time) 

# Project header files path
include_directories(${Boost_INCLUDE_DIRS})

# The wpl command line program
set(WM_HEADERS
  ../../src/wpl/blog.h
  ../../src/wpl/content.h
  ../../src/wpl/layout.h
  ../../src/wpl/site.h
  ../../src/wpl/stdfiles.h
  ../../src/wpl/version.h
)
set(WM_SOURCES
  ../../src/wpl/blog.cpp
  ../../src/wpl/content.cpp
  ../../src/wpl/layout.cpp
  ../../src/wpl/main.cpp
  ../../src/wpl/site.cpp
  ../../src/wpl/stdfiles.cpp
  ../../src/wpl/version.cpp
)
add_executable(wpl ${WM_SOURCES} ${WM_HEADERS})
target_include_directories(wpl PUBLIC ../include)
target_link_libraries(wpl ${Boost_LIBRARIES})
