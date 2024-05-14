class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        while(x > 0 || y > 0){
            int bitx = 0;
            int bity = 0;
            bitx = x & 1;
            x = x >> 1;
            bity = y & 1;
            y = y >> 1;
            if(bitx != bity)count++;
        }
        return count;
    }
};