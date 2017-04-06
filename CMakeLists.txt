cmake_minimum_required(VERSION 3.0)
project(advanced_rename)
set(SOURCE main.cpp)
add_executable(${PROJECT_NAME} ${SOURCE})

set(CMAKE_CXX_COMPILER clang++)

set(CMAKE_CXX_ALL "-std=c++1z")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_ALL} -g")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_ALL}")

#{
    #// See https://go.microsoft.com/fwlink/?LinkId=733558
    #// for the documentation about the tasks.json format
    #"version": "0.1.0",
    #"command": "clang++",
    #"isShellCommand": true,
    #"args": ["main.cpp", "-std=c++1z", "-g", "-o", "main",
        #"-isystem", "/opt/build/cpprestsdk/include", "-isystem", "/opt/local/include",
        #"-L/opt/local/lib", "-L/opt/build/cpprestsdk/lib/debug",
        #"-Wl,-rpath", "-Wl,/opt/local/lib", "-Wl,-rpath", "-Wl,/opt/build/cpprestsdk/lib/debug",
        #"-lboost_system-mt", "-lboost_thread-mt", "-lboost_chrono-mt", "-lssl", "-lcrypto", "-lcpprest"],
    #"showOutput": "always"
#}