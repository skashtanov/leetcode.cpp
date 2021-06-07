const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = (int)numbers.size() - 1;
        while (i != j && numbers[i] + numbers[j] != target){
            if (numbers[i] + numbers[j] < target)
                ++i;
            else if (numbers[i] + numbers[j] > target)
                --j;
            else 
                break;
        }
        return {i + 1, j + 1};
    }
};