const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();


class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = (int)s.size() - 1;
        while (i < j)
            std::swap(s[i++], s[j--]);
    }
};