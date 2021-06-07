class Solution {
public:
    string removeOuterParentheses(string S) {
        int balance = 0;
        int size = (int)S.size();
        if (size < 3)
            return "";
        std::string answer;
        for (char c : S){
            if (c == '('){
                ++balance;
                if (balance != 1)
                    answer.push_back(c);
            }
            else{
                --balance;
                if (balance)
                    answer.push_back(c);
            }
        }
        return std::move(answer);
    }
};