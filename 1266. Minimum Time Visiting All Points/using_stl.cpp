class Solution {
public:
    int minTimeToVisitAllPoints(std::vector<std::vector<int>>& points, int ans = 0) {
        for(int i = 0; i < (int)points.size() - 1; ++i)
            ans += std::max(
                            std::abs(points[i + 1][0] - points[i][0]),
                            std::abs(points[i + 1][1] - points[i][1])            
                            );
        return ans;
            
        
    }
};