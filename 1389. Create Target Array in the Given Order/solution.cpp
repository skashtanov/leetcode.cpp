const int ZERO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        std::vector<int> target;
        for (size_t i = 0; i < index.size();++i)
            target.insert(target.begin() + index[i], nums[i]);
        return std::move(target);
    }
};