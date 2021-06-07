#include <algorithm>

class Solution {
public:
    int strStr(const string& haystack, const string& needle) {
        std::string::size_type pos = haystack.find(needle);
        if (pos == std::string::npos)
            return -1;
        return pos;
    }
};