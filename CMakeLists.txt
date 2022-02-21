cmake_policy(SET CMP0048 NEW)
PROJECT (repro LANGUAGES CXX)
cmake_minimum_required(VERSION 3.12)

include(FetchContent)
FetchContent_Declare(
        DocTest
        GIT_REPOSITORY "https://github.com/doctest/doctest"
        GIT_TAG "2.4.5"
)
FetchContent_MakeAvailable(DocTest)

enable_testing()
add_executable(getenv test_getenv.cpp)
target_link_libraries(getenv PUBLIC doctest::doctest)

include(${doctest_SOURCE_DIR}/scripts/cmake/doctest.cmake)
doctest_discover_tests(getenv PROPERTIES ENVIRONMENT "SOURCE_DIR=${CMAKE_SOURCE_DIR}")

