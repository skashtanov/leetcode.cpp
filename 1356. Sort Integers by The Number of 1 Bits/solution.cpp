class Solution {
public:    
    vector<int> sortByBits(vector<int>& arr) {
        std::sort(arr.begin(), arr.end(), [](int x, int y) -> bool{
                                                    short int x_ones = 0, y_ones = 0;
                                                    int x_copy = x, y_copy = y;
                                                    while (x){
                                                        x_ones += x & 1;
                                                        x >>= 1;
                                                    }
                                                    while (y){
                                                        y_ones += y & 1;
                                                        y >>= 1;
                                                    }
                                                    if (x_ones == y_ones)
                                                        return x_copy < y_copy;
                                                    return x_ones <  y_ones;                        
                                            });
        return std::move(arr);
    }
};