const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";
        
        std::string current_prefix = strs[0];
        
        for (int i = 1; i < strs.size(); ++i){
            while (strs[i].find(current_prefix) != 0){
                current_prefix = current_prefix.substr(0, (int)current_prefix.size() - 1);
                if (current_prefix.empty())
                    return "";
            }
        }
        return current_prefix;
    }
};