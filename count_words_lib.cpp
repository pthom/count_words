#include <vector>
#include "count_words_lib.h"
#include <fplus/fplus.hpp>

namespace test
{
    /*! \brief Split a string into lines
     *  Given a string s, this function will split into lines and return them as a vector
     *  @param toto: the string to split
     *  @return: a vector<string> with the lines that have been splitted :-)
     */
    vector<string> splitLines(const string toto)
    {
        if (toto.empty())
            throw std::runtime_error("Empty string !");
        std::vector<string> r = fplus::split<string>('\n', true, toto);
        return r;
    }
}
