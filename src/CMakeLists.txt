add_executable(app main.cpp backend.cpp)
target_link_libraries(app webview)

# On Windows the executable gets put in a Debug folder,
# add target install to fix this.
add_custom_command(TARGET app POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${PROJECT_SOURCE_DIR}/gui
            ${CMAKE_CURRENT_BINARY_DIR}/gui)
