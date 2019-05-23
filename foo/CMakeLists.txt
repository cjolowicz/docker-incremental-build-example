project(foo LANGUAGES C)
add_library(foo foo.c foo.h)
target_include_directories(foo PUBLIC ${PROJECT_SOURCE_DIR})
