# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.13)

project ("ParseMobiHtml")

set(BUILD_SHARED_LIBS OFF)
set(LIBXML2_WITH_ICONV OFF)
set(LIBXML2_WITH_LZMA OFF)
set(LIBXML2_WITH_PYTHON OFF)
set(LIBXML2_WITH_ZLIB OFF)
set(LIBXML2_WITH_PROGRAMS OFF)
set(LIBXML2_WITH_TESTS OFF)

# Include sub-projects.
add_subdirectory (libxml2)
add_subdirectory (ParseMobiHtml)
