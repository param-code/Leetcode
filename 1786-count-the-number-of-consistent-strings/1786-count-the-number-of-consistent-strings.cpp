class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = words.size();
        for(int i = 0;i < words.size();i++){
            for(auto x:words[i]){
                if(allowed.find(x) == string::npos){
                    count--;
                    break;    
                }
            }
        }
        return count;
    }
};