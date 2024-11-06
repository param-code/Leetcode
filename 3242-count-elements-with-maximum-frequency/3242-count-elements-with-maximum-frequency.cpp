class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x:nums)mp[x]++;
        int maxi = 0;
        for(auto x:mp)maxi = max(maxi,x.second);
        int ans = 0;
        for(auto x:mp)if(x.second == maxi)ans += x.second;
        return ans;
    }
};