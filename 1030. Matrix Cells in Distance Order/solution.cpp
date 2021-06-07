const int ZERO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        int current_distance = 0;
        std::map<int, std::vector<std::pair<int, int>>> distance;
        std::vector<std::vector<int>> answer;
        
        for (int i = 0; i < R;++i)
            for(int j = 0;j < C; ++j)
                distance[abs(i - r0) + abs(j - c0)].push_back({i, j});
        for(const auto& it: distance)
            for(const auto& elem: it.second)
                answer.push_back({ elem.first, elem.second });
        return std::move(answer);
    }
};