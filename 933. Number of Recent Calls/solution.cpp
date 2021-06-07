const int ZERO = [](){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();


class RecentCounter {
public:
    RecentCounter() {}
    std::queue<int> all_pings;
    
    int ping(int t) {
        if (all_pings.empty())
            all_pings.push(t);
        else{
            int time = all_pings.front();
            while(!all_pings.empty() && t - time > 3000){
                all_pings.pop();
                time = all_pings.front();                
            }
            all_pings.push(t);
        }
        return all_pings.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */