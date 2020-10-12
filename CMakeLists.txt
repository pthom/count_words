cmake_minimum_required (VERSION 3.2.0)
set (CMAKE_CXX_STANDARD 14)

project(test)

# Add third parties (doctest and fplus)
include_directories("external/doctest")
include_directories("external/FunctionalPlus/include")

# Add main target and test target
add_library(count_words_lib count_words_lib.cpp)

add_executable(count_words count_words.main.cpp)
target_link_libraries(count_words PRIVATE count_words_lib)

add_executable(count_words_test count_words_test.cpp)
target_link_libraries(count_words_test PRIVATE count_words_lib)

# Enable tests and register test with `make test`
enable_testing()
add_test(NAME count_words_test COMMAND count_words_test)
