const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        if (nums.size() == 0)
            return {};
        int idx = 0;
        std::vector<int> ans;
        
        while (2 * idx + 1 < nums.size()){
            int freq = nums[2 * idx], val = nums[2 * idx + 1];
            ans.insert(ans.end(), freq, val);
            ++idx;            
        }
        
        return ans;
    }
};