#include <vector>
#include <string>

using namespace std;
namespace test
{
    class StringUtilities
    {
    public:
        StringUtilities(const std::string s) : s(s) {}
        vector<string> splitLines();
    private:
        std::string s;
    };
}
