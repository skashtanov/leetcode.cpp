class Solution {
public:
    vector<int> sumZero(int n) {
        if (n == 1)
            return {0};
        std::vector<int> answer(n);
        bool is_even = n & 1;
        if (is_even)
            --n;
        int current = 1;
        for(int i = 0; i < n; i += 2){
            answer[i] = current;
            answer[i + 1] = -current;
            ++current;
        }
        if (is_even)
            answer[n] = 0;
        return std::move(answer);

    }   
};