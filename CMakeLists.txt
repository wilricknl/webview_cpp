cmake_minimum_required(VERSION 3.16.0)
project(webview_cpp
  VERSION 0.0.1
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# Download all submodules
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
    option(GIT_SUBMODULE "Check submodules during build" ON)
    if (GIT_SUBMODULE)
        message(STATUS "Updating submodules...")
        execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
                        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                        RESULT_VARIABLE GIT_SUBMODULE_RESULT)
        if (NOT GIT_SUBMODULE_RESULT EQUAL "0")
            message(FATAL_ERROR "git submodule update --init --recursive failed with ${GIT_SUBMODULE_RESULT}")
        endif()
    endif() 
endif()

# Check webview is downloaded
if (NOT EXISTS "${PROJECT_SOURCE_DIR}/external/webview/webview.h")
    message(FATAL_ERROR "The webview submodule was not downloaded!")
endif()

include_directories(external/webview)

add_subdirectory(src)
