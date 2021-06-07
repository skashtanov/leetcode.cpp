const int ZERO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

int MAX(int x, int y){
    return x > y ? x : y;
}

int ABS(int x) {
    return x >= 0 ? x : -x;
}

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points, int ans = 0) {
        int size = points.size() - 1;
        for(int i = 0; i < size; ++i)
            ans += MAX(ABS(points[i + 1][0] - points[i][0]),
                       ABS(points[i + 1][1] - points[i][1])            
                       );
        return ans;
            
        
    }
};