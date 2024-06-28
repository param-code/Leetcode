class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        if(s1[0] != s2[0] || s2[0] != s3[0] || s1[0] != s3[0])return -1;
        int ans = 1;
        int len = min({s1.size(),s2.size(),s3.size()});
        for(int i = 1;i < len;i++){
            if(s1[i] == s2[i] && s1[i] == s3[i])ans++;
            else break;
        }
        int f = s1.size() - ans;
        int s = s2.size() - ans;
        int t = s3.size() - ans;
        cout << ans << endl;
        ans = f+s+t;
        return ans;
    }
};