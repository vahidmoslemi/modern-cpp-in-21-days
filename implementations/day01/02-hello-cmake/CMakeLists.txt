# Minimum CMake version — 3.25 is a safe modern floor.
cmake_minimum_required(VERSION 3.25)

# Project name, version, and language.
project(hello_cmake VERSION 0.1.0 LANGUAGES CXX)

# Require C++23, portably, with no compiler-specific extensions.
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# A target: one executable named `hello`, built from one source file.
add_executable(hello src/main.cpp)

# Warnings, as errors, per compiler. (Generator expressions — explained on Day 18.)
target_compile_options(hello PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/W4;/WX>
  $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall;-Wextra;-Werror>
)
