class Solution {
public:
    void solve(vector<string> ans,string s){
        string temp = "0:00";
    }
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        if(turnedOn > 8)return {};
        for(int i = 0;i < 12;i++){
            for(int j = 0;j < 60;j++){
                string temp = "";
                if(__builtin_popcount(i)+__builtin_popcount(j) == turnedOn){
                    temp += to_string(i) + ":";
                    if(j < 10)temp += "0";
                    temp += to_string(j);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};