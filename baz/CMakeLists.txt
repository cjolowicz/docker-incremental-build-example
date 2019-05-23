project(baz LANGUAGES C)
add_executable(baz baz.c)
target_link_libraries(baz foo)
install(TARGETS baz COMPONENT baz DESTINATION bin)
