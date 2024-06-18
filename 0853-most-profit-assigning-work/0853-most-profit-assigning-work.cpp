class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int ans = 0;
        vector<pair<int,int>> v;
        for(int i = 0;i < difficulty.size();i++){
            v.push_back({difficulty[i],profit[i]});
        }
        sort(begin(v),end(v));
        for(auto x:worker){
            int pause = 0;
            for(int i = 0;i < v.size();i++){
                if(v[i].first > x)break;
                else pause = max(v[i].second,pause);
            }
            ans += pause;
        }
        return ans;
    }
};