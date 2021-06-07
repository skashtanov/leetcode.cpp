#include <math.h>
#include <limits.h>

class Solution {
public:
    int reverse(int x) {
        bool positive = x >= 0;
        if (!positive){
            if (x == -2147483648) 
                return 0;
            else x *= -1;
        }
        long long int answer = 0;
        while (x > 0){
            answer = (answer * 10) + x % 10;
            x /= 10;
        }
        if (answer > 2147483647) 
            return 0;
        if (positive) 
            return (int)answer;
        return int(-answer);
    }
};