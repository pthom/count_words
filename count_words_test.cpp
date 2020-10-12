#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include "count_words_lib.h"
#include <fplus/fplus.hpp>

TEST_CASE("splitLines")
{
    using namespace test;
    {
        auto s = R"(
Bonjour
Comment
Allez
Vous
)";
        auto lines = splitLines(s);
        std::vector<std::string> expected =
        {
            "Bonjour",
            "Comment",
            "Allez,",
            "Vous"
        };
        // std::cout << fplus::show(expected);
        // std::cout << fplus::show(lines);
        CHECK( lines == expected);
    }
}
