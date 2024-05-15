class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = words.size();
        int bitset = 0;
        for(auto c:allowed){
            bitset |= 1 << c-'a';
        }
        for(auto word:words){
            for(auto c:word){
                if((bitset & (1 << c - 'a')) == 0){
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};