const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 0 && n == 0)
            return;
        for (int i = 0; i < n;++i){
            nums1[m] = nums2[i];
            ++m;
            for (int j = m - 1; j > 0; --j)
                if (nums1[j] < nums1[j - 1])
                    std::swap(nums1[j], nums1[j - 1]);
            
        }   
    }
};