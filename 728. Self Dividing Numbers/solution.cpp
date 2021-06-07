class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
       std::vector<int> answer;
        for (int i = left; i <= right; ++i){
           int copy = i;
           bool self_dividing = true;
           while (copy != 0 && self_dividing){
               if (copy % 10 == 0){
                   self_dividing = false;
                   break;
               }
               if (i % (copy % 10) != 0)
                   self_dividing = false;
               copy /= 10;               
           }
           if (self_dividing)
               answer.push_back(i);
        }
        return std::move(answer);
    }
};