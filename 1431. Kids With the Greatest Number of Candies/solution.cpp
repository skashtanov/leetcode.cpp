const int ZERO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int current_max = *std::max_element(candies.begin(), candies.end());
        std::vector<bool> ans(candies.size());
        for(size_t i = 0; i < candies.size(); ++i)
            ans[i] = candies[i] + extraCandies >= current_max;
        return std::move(ans);
    }
};