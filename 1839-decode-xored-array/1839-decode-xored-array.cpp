class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        for(auto x:encoded){
            int temp = ans.back() ^ x;
            ans.push_back(temp);
        }
        return ans;
    }
};