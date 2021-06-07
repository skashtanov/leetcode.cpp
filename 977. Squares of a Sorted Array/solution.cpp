const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int size = (int)A.size();
        int positive_ptr = 0;
        
        while (positive_ptr < size && A[positive_ptr] < 0)
            ++positive_ptr;
        
        int negative_ptr = positive_ptr - 1;
        
        std::vector<int> sorted(size);
        int cnt = 0;
        
        while (positive_ptr < size && negative_ptr >= 0){
            if (std::abs(A[negative_ptr]) < std::abs(A[positive_ptr])){
                sorted[cnt++] = A[negative_ptr] * A[negative_ptr];
                --negative_ptr;
            }
            else{
                sorted[cnt++] = A[positive_ptr] * A[positive_ptr];
                ++positive_ptr;
            }
        }
        
        while (negative_ptr >= 0)
            sorted[cnt++] = A[negative_ptr] * A[negative_ptr--];
        while (positive_ptr < size)
            sorted[cnt++] = A[positive_ptr] * A[positive_ptr++];
            
        return sorted;
    }
};