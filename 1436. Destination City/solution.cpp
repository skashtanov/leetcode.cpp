class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, std::vector<string>> road;
        for (std::vector<string>& way : paths)
            road[way[0]].push_back(way[1]); 
        for (std::vector<string>& way : paths)
            if (road[way[0]].size() != 0 && road[way[1]].size() == 0)
                return way[1];
        return "";
    }
};