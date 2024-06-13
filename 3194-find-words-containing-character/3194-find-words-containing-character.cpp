class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i = 0;i < words.size();i++){
            auto it = words[i].find(x);
            if(it != string::npos)ans.push_back(i);
        }
        return ans;
    }
};