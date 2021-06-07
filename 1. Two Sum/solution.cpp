const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> all_elems;
        
        for (int i = 0; i < (int)nums.size(); i++)
			all_elems[nums[i]] = i;
           
       for (int i = 0; i < (int)nums.size(); i++) {
           int cur = target - nums[i];
           if (all_elems.find(cur) != all_elems.end() && i != all_elems[cur])
               return { i, all_elems[cur] };
       }
       return { 0, 0 };
    }
};