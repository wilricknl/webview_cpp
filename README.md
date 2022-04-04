# Webview_cpp

An example CMake project to build cross-platform (Linux and Windows) C++17 
applications using a webview frontend.

**Table of Contents**

- [Webview_cpp](#webview_cpp)
- [Windows](#windows)
  - [Requirements](#requirements)
  - [Building and running](#building-and-running)

# Windows

## Requirements

* [NuGet Commandline](https://www.nuget.org/downloads)
  * Make sure you add the path to the executable to *%PATH%* in the environment
    variables.
* [Visual Studio 2022](https://visualstudio.microsoft.com/vs/) with the
  *Desktop development with C++* workload installed. Also, make sure you select
  *C++ CMake for Windows* as sub-option of this workload.

## Building and running

Simply open this folder in Visual Studio 2022. Then right click on the root
`CMakeLists.txt` and select `Set as startup item`. Next you should be able to
build the project with `Ctrl+B` and run it with `Ctrl+F5`.
