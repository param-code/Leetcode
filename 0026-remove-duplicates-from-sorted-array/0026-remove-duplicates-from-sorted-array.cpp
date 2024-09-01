class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(auto &x:nums){
            s.insert(x);
        }
        vector<int> ans;
        for(auto x:s){
            ans.push_back(x);
        }
        nums = ans;
        return s.size();
    }
};