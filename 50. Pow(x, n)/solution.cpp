class Solution {
public:
    double myPow(double x, long long int n) {
        if (n < 0)
            return 1 / myPow(x, -n);
        if (n == 0)
            return 1.0;
        if (n % 2 == 1)
            return x * myPow(x, n - 1);
        else{
            double b = myPow(x, n / 2);
            return b * b;
        }
    }
};