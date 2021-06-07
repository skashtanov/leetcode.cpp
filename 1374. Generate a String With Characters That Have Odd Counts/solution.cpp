class Solution {
public:
    string generateTheString(int n) {
        if (n & 1)
            return std::move(std::string(n, 'a'));
        return std::move(std::string(n - 1, 'a') + 'b');
    }
};