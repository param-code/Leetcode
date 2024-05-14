class Solution {
public:
    int hammingWeight(int n) {
        string s = "";
        while(n > 0){
            s = to_string(n % 2) + s;
            n /= 2;
        }
        int ans = 0;
        for(auto x:s)if(x == '1')ans++;
        return ans;
    }
};