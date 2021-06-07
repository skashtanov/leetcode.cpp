#include <algorithm>
#include <unordered_map>

const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_map<char, bool> different_chars;
        int current_ans = 0, i = 0, j = 0;
        
        while (i < (int)s.size() && j < (int)s.size()){
            if (!different_chars[s[j]]){
                different_chars[s[j]] = true;
                ++j;
                current_ans = std::max(current_ans, j - i);
            }
            else{
                different_chars[s[i]] = false;
                ++i;
            }
        }
        return current_ans;
    }
};