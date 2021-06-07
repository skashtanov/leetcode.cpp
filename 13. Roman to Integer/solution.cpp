const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    std::string make_string(char first, char second){
        std::string ans(2,'I');
        ans[0] = first;
        ans[1] = second;
        return ans;
    }
    int romanToInt(string s) {
        int num = 0;
        int i = 0;
        while (i < (int)s.size()) {
            if (i < (int)s.size() - 1){
                std::string str = make_string(s[i], s[i + 1]);
                bool collision_flag = false;
                if (str == "IV"){
                    num += 4;
                    collision_flag = true;
                }
                else if (str == "IX"){
                    num += 9;
                    collision_flag = true;
                }
                else if (str == "XL"){
                    num += 40;
                    collision_flag = true;
                }
                else if (str == "XC"){
                    num += 90;
                    collision_flag = true;
                }
                else if (str == "CD"){
                    num += 400;
                    collision_flag = true;
                }
                else if (str == "CM"){
                    num += 900;
                    collision_flag = true;
                }
                
                if (collision_flag)
                    i += 2;
                else{
                    if (s[i] == 'I')
                        num += 1;
                    else if (s[i] == 'V')
                        num += 5;
                    else if (s[i] == 'X')
                        num += 10;
                    else if (s[i] == 'L')
                        num += 50;
                    else if (s[i] == 'C')
                        num += 100;
                    else if (s[i] == 'D')
                        num += 500;
                    else if (s[i] == 'M')
                        num += 1000;
                    ++i;
                }
                if (i >= (int)s.size())
                    return num;
            }
            else if (i == (int)s.size() - 1){
                 if (s[i] == 'I')
                        num += 1;
                    else if (s[i] == 'V')
                        num += 5;
                    else if (s[i] == 'X')
                        num += 10;
                    else if (s[i] == 'L')
                        num += 50;
                    else if (s[i] == 'C')
                        num += 100;
                    else if (s[i] == 'D')
                        num += 500;
                    else if (s[i] == 'M')
                        num += 1000;
                    ++i;
            }
        }
        return num;
    }
};