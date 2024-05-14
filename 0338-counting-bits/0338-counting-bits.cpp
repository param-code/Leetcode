class Solution {
public:
    int bits(int n){
        int ans = 0;
        while(n > 0){
            int bit = n & 1;
            ans += bit;
            n = n >> 1;
        }
        return ans;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0;i <= n;i++){
            ans.push_back(bits(i));
        }
        return ans;
    }
};