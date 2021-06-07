const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for (int i = 0; i < (int)nums.size(); ++i){
            if (nums[i] != val){
                nums[j] = nums[i];
                ++j;
            }
        }
        return j;
    }
};