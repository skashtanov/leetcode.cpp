class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        size_t left = 0, right = nums.size() - 1;
        while (right - left > 0){
            size_t middle = left + (right - left) / 2;
            if (nums[middle] == target)
                return middle;
            else if (nums[middle] < target)
                left = middle + 1;
            else 
                right = middle;
        }
        if (nums[left] < target)
            return ++left;
        return left;
    }
};