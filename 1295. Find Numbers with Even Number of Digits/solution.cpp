const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for (int n : nums){
            int max_pow = 0;
            while (n){
                ++max_pow;
                n /= 10;                    
            }
            if (max_pow % 2 == 0 && max_pow > 0)
                ++cnt;
        }
        return cnt;
    }
};