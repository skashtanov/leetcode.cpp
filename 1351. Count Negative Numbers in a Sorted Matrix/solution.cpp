const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0, n = (int)grid[0].size();
        for (auto& row : grid)
            for(int i = 0; i < n;++i){
                if (row[i] < 0){
                    ans += n - i;
                    break;
                }
            }
        return ans;
    }
};