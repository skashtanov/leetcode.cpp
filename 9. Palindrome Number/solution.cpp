#include <iostream>
#include <algorithm>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x == 0) 
            return true;
        if (x < 0 || x % 10 == 0)
            return false;
        int k = 0;
        int v = x;
        while (v != 0){
            v /= 10;
            ++k;
        }
        int number[10];
        for (int i = 0; i < k; ++i){
            number[i] = x % 10;
            x /= 10;
        }
        for (int i = 0; i < k / 2 + k % 2;++i)
            if (number[i] != number[k - 1 - i])
                return false;
        return true;
    }
};