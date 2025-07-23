cmake_minimum_required(VERSION 3.13.3)

project(VOID-exr-plugin VERSION 1.0.0 LANGUAGES CXX)

# C++17 and Above
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find EXR and IMath
find_package(OpenEXR REQUIRED)
find_package(Imath REQUIRED)
# Find VOID
find_package(VOID REQUIRED CONFIG)

# Add the plugin source
add_subdirectory(src)
