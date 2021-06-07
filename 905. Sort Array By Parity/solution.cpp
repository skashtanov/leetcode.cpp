const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        std::vector<int> tmp(A.size(), 0);
        int i = 0, j = (int)A.size() - 1;
        
        for (int k = 0; k < (int)A.size(); ++k)
            if (A[k] & 1)
                tmp[j--] = A[k];
            else
                tmp[i++] = A[k];
        
        return tmp;
    }
};