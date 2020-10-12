#include <vector>
#include <string>

using namespace std;
namespace test
{
    /**
     * Class for handling all the string utilities. Only splitLines is avail at the moment.
     */
    class StringUtilities
    {
    public:
        StringUtilities(const std::string s) : s(s) {}
        vector<string> splitLines();
    private:
        std::string s;
    };
}
