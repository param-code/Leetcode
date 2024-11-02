class Solution {
public:
    string lcs(string a,string b,int m,int n){
        int t[m+1][n+1];
        for(int i = 0;i <= m;i++){
            for(int j = 0;j <= n;j++){
                if(i == 0 || j == 0)t[i][j] = 0;
            }
        }
        for(int i = 1;i <= m;i++){
            for(int j = 1;j <= n;j++){
                if(a[i-1] == b[j-1])t[i][j] = t[i-1][j-1] + 1;
                else t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
        string ans = "";
        int i = m,j = n;
        while(i > 0 && j > 0){
            if(a[i-1] == b[j-1]){
                ans.push_back(a[i-1]);
                i--;
                j--;
            }else{
                if(t[i-1][j] > t[i][j-1]){
                    ans.push_back(a[i-1]);
                    i--;
                }else{
                    ans.push_back(b[j-1]);
                    j--;
                }
            }
        }
        while(i > 0){
            ans.push_back(a[i-1]);
            i--;
        }
        while(j > 0){
            ans.push_back(b[j-1]);
            j--;
        }
        return ans;
    }
    string shortestCommonSupersequence(string str1, string str2) {
        int m = str1.size(),n = str2.size();
        string ans = lcs(str1,str2,m,n);
        reverse(begin(ans),end(ans));
        return ans;
    }
};