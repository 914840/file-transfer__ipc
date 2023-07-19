cmake_minimum_required(VERSION 3.22)

project(FileTransferIPC VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD              14)
set(CMAKE_CXX_STANDARD_REQUIRED     ON)
set(CMAKE_CXX_EXTENSIONS            ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS   ON)

add_subdirectory(app)
add_subdirectory(lib)
add_subdirectory(test)
