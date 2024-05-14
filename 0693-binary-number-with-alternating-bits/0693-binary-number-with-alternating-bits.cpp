class Solution {
public:
    bool hasAlternatingBits(int n) {
        int b = n & 1;
        while(n > 0){
            n >>= 1;
            int bit = n & 1;
            if(b == bit)return false;
            b = bit;
        }
        return true;
    }
};