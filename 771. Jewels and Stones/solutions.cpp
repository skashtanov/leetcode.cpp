class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> types;
        for (char type : J)
            types.insert(type);
        
        int cnt = 0;
        
        for (int i = 0; i < S.size();++i)
            if (types.find(S[i]) != types.end())
                ++cnt;
        
        return cnt;
    }
};