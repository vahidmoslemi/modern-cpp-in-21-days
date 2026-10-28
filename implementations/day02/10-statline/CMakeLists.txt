cmake_minimum_required(VERSION 3.25)
project(statline VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(statline src/main.cpp)
target_compile_options(statline PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/W4;/WX>
  $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall;-Wextra;-Werror>
)
