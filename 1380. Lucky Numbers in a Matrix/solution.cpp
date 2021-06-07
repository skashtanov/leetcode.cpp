const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();


class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        const int INF = int(1e9 + 7);
        std::vector<int> ans;
        int i = 0;
        
        for (int i = 0; i < (int)matrix.size(); ++i){
            int _min = matrix[i][0];
            int idx = 0;
            
            for (int j = 0; j < (int)matrix[0].size(); ++j)
                if (matrix[i][j] < _min){
                    _min = matrix[i][j];
                    idx = j;
                }
            
            int _max = -1;
            
            for (int k = 0; k < (int)matrix.size();++k)
                _max = std::max(_max, matrix[k][idx]);
            
            if (_min == _max)
                ans.push_back(_max);
            
        }
        return ans;
        
    }
};