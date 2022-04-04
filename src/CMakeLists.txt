add_executable(app main.cpp backend.cpp)
target_link_libraries(app webview)

if (WIN32)
    set_target_properties(app
        PROPERTIES 
        RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_CURRENT_BINARY_DIR})
endif()

add_custom_command(TARGET app POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${PROJECT_SOURCE_DIR}/gui
            ${CMAKE_CURRENT_BINARY_DIR}/gui)
