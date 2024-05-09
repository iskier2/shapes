cmake_minimum_required(VERSION 3.27)

set(PROJECT_ID shapes_2)

set(SOURCE_FILES
        src/shapes.cpp
)
set(SOURCES_FILES_TESTS
        test/test_shapes.cpp
        test/main_gtest.cpp
)

include(../SetCommonConfig.cmake)
