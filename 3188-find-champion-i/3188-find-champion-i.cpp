class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        unordered_map<int,int> mpp;
        for(int i = 0;i < grid.size();i++){
            for(int j = 0;j < grid.size();j++){
                if(i != j && grid[i][j] == 1)mpp[i]++;
            }
        }
        int ans = 0;
        int z = 0;
        for(auto x:mpp){
            if(x.second > z){
                ans = x.first;
                z = x.second;
            }
        }
        return ans;
    }
};