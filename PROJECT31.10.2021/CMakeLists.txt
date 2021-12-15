cmake_minimum_required(VERSION 3.16)
project(CLionTemplateProject)

set(CMAKE_CXX_STANDARD 17)

# REQUIRED tells cmake there is a submodule in this folder
add_subdirectory(matrixLib)

# OPTIONAL to be able to omit the folder name from the include statements
include_directories(matrixLib)

# Create target
add_executable(CLionTemplateProject matrixApp/main.cpp matrixApp/interface.cpp matrixApp/interface.h)

# Link the library to the target
target_link_libraries(${PROJECT_NAME} libraryA)

