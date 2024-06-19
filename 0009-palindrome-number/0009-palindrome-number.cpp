class Solution {
public:
    long long reversex(long long x){
        long long ans = 0;
        while(x > 0){
            ans = (ans * 10) + (x % 10);
            x /= 10;
        }
        return ans;
    }
    bool isPalindrome(int x) {
        if(x < 0)return false;
        long long rev = reversex(x);
        return rev == x;
    }
};