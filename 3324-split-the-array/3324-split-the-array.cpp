class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        vector<int> v(101,0);
        for(auto x:nums){
            v[x]++;
        }
        for(auto x:v)if(x > 2)return false;
        return true;
    }
};