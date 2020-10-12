cmake_minimum_required (VERSION 3.2.0)
set (CMAKE_CXX_STANDARD 14)

project(test)

# Add third parties (doctest and fplus)
include_directories("external/doctest")
include_directories("external/FunctionalPlus/include")

# Add main target and test target
add_executable(count_words count_words.cpp)
add_executable(count_words_test count_words_test.cpp)

# Enable tests and register test with `make test`
enable_testing()
add_test(NAME count_words_test COMMAND count_words_test)
