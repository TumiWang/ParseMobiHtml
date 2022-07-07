cmake_minimum_required (VERSION 3.13)

#find_package(libxml2 REQUIRED)
#find_package(LibXml2 CONFIG REQUIRED)
#find_package(PkgConfig REQUIRED)
#pkg_check_modules(XML REQUIRED LibXml2)

file(GLOB SOURCE
    "*.cpp"
    "*.c"
    )

add_executable(test ${SOURCE})

target_include_directories(test PUBLIC
    ${CMAKE_SOURCE_DIR}/libxml2/include)

target_link_libraries(test
    PUBLIC
    LibXml2::LibXml2
    )