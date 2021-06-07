const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        std::vector<int> counter(101, 0);
        for (int elem : nums)
            ++counter[elem];
        
        int prev = 0;
        
        for(int i = 0; i < 101; ++i){
            int tmp = counter[i];
            counter[i] = prev;
            prev += tmp;            
        }
        
        for (int& elem : nums)
            elem = counter[elem];
        
        return nums;
    }
};