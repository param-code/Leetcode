class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mpp;
        for(auto x:s)mpp[x]++;
        for(int i = 0;i < s.size();i++){
            char x = s[i];
            if(mpp[x] == 1)return i;
        }
        return -1;
    }
};