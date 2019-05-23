cmake_minimum_required(VERSION 3.3)

project(foobar LANGUAGES C)

add_subdirectory(foo)
add_subdirectory(bar)
add_subdirectory(baz)

set(CPACK_GENERATOR DEB)
set(CPACK_DEB_COMPONENT_INSTALL ON)
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Claudio Jolowicz <mail@claudiojolowicz.com>")
include(CPack)
