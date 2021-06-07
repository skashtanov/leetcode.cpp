const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        std::vector<int> rows(n, 0), cols(m, 0);
        
        for (auto& row : indices){
            rows[row[0]] += 1;
            cols[row[1]] += 1;
        }
        
        int odd_rows = 0, odd_cols = 0;
        
        for (int row_elem : rows)
            odd_rows += row_elem % 2;
        
        for (int column_elem : cols)
            odd_cols += column_elem % 2;
        
        return odd_rows * (m - odd_cols) + (n - odd_rows) * odd_cols;
              
    }
};