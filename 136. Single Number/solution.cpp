const int ZERO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i = 1; i < (int)nums.size();++i)
             nums[i] ^= nums[i - 1];
        return nums[nums.size() - 1];
    }
};