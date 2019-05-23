project(bar LANGUAGES C)
add_executable(bar bar.c)
target_link_libraries(bar foo)
install(TARGETS bar COMPONENT bar DESTINATION bin)
