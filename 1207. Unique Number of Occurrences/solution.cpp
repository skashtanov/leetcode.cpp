const int ZERO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)  {
        unordered_map<int, int> map;
        std::unordered_set<int> freq;
        for(const int & v : arr)
            ++map[v];
        for(const auto& it : map)
            if(!freq.insert(it.second).second)
                return false;
        return true;
    }
};