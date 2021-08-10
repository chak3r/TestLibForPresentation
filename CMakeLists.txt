cmake_minimum_required(
    VERSION
    3.18.3
)

project(test_lib_for_presentation)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(
    CMAKE_INCLUDE_CURRENT_DIR
    ON

)

add_subdirectory(
    src
)
