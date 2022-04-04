# Webview_cpp

An example CMake project to build cross-platform (Linux and Windows) C++17 
applications using a webview frontend.

**Table of Contents**

- [Webview_cpp](#webview_cpp)
- [Linux](#linux)
  - [Requirements](#requirements)
  - [Building and running](#building-and-running)
- [Windows](#windows)
  - [Requirements](#requirements-1)
  - [Building and running](#building-and-running-1)

# Linux

## Requirements

* The web content engine library for GTK

```shell
# installation on Ubuntu based distributions
sudo apt-get install libwebkit2gtk-4.0-dev
```

## Building and running

Open the root `CMakeLists.txt` in CLion. Then the project can be built with 
`Ctrl+F9` and run with `Shift+F10`.

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
