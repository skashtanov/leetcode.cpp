const int ZERO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = (int)arr.size();
        if (size == 1)
            return {-1};
        else if (size == 2)
            return {arr[1], -1};
        
        std::vector<int> max(arr.size(), 0);
        int current_max = arr[size - 1];
        max[size - 1] = current_max;
        max[size - 2] = arr[size - 1];
        for(int i = size - 2; i >= 0; --i)
            max[i] = std::max(max[i + 1], arr[i + 1]);
        for(int i = 0; i < size;++i)
            arr[i] = max[i];
        arr[size - 1] = -1;
        return std::move(arr);       
    }
};