class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.size() != s.size())return false;
        string temp = s;
        for(int i = 0;i < goal.size();i++){
            if(goal == temp)return true;
            temp = "";
            for(int j = i+1;j < goal.size();j++){
                temp += s[j];
            }
            for(int x = 0;x <= i;x++){
                temp += s[x];
            }
        }
        return false;
    }
};