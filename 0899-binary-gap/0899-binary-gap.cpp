class Solution {
public:
    int binaryGap(int n) {
        int ans = 0;
        int gap = 0;
        bool open = false;
        while(n > 0){
            if((n & 1) == 1){
                if(open){
                ans = max(ans,gap);
                gap = 0;
                }
                else open = true;
            }
            if(open)gap++;
            n >>= 1;
        }
        return ans;
    }
};