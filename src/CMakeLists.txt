project(test_lib_for_presentation)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(
    HEADERS

    ExportedFunctions.hpp
)

set(
    SOURCES

    ExportedFunctions.cpp
)

add_library(
    ${PROJECT_NAME}
    STATIC
    ${HEADERS}
    ${SOURCES}
)

set_target_properties(${PROJECT_NAME} PROPERTIES DEBUG_POSTFIX "d")

install(
    TARGETS
        ${PROJECT_NAME}
    DESTINATION
        ${CMAKE_INSTALL_PREFIX}
)