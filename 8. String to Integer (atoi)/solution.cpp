const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int myAtoi(string str) {
        int i = 0;
        if (str.size() == 0 || (str.size() == 1 && !(str[0] >= '0' && str[0] <= '9')))
            return 0;
        
        while (str[i] == ' ' && i < str.size())
            ++i;
        
        std::string new_string = str.substr(i);
        
        if (new_string.size() == 0)
            return 0;
        
        int sign = new_string[0] == '-' ? -1 : 1;
        
        int j = 0;
        long long int number = 0;
        
        if (new_string[0] == '-' || new_string[0] == '+')
            j = 1;
        
        while (j < new_string.size() && new_string[j] >= '0' && new_string[j] <= '9'){
            number = number * 10 + (new_string[j] - '0');
            if (sign == 1 && number > 2147483647)
                return 2147483647;
            if (sign == -1 && number > 2147483648)
                return -2147483648;
            ++j;
        }

        return sign * number;
    }
};