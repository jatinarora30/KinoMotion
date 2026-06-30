cmake_minimum_required(VERSION 3.16)
project(KinoMotion LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(KinoMotion STATIC
    src/KinoMotion.cpp
)

target_include_directories(KinoMotion
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(test_plan
    test/test_plan.cpp
)

target_link_libraries(test_plan PRIVATE KinoMotion)

enable_testing()
add_test(NAME test_plan COMMAND test_plan)
