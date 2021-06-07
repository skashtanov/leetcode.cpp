const int ZERO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs, int res = 0) {
        auto comparator = [](const std::vector<int>& lhs, const std::vector<int>& rhs)-> bool {
            return lhs[0] - lhs[1] < rhs[0] - rhs[1];
        };
        
        std::sort(costs.begin(), costs.end(), comparator);
        int size = (int)costs.size() >> 1;
        for(int i = 0; i < size; ++i)
            res += costs[i][0] + costs[i + size][1];
        return res;                       
           
    }
};