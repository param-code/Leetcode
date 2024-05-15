class Solution {
public:
    int digitSum(int n){
        int ans = 0;
        while(n > 0){
            ans += ((n % 10) * (n % 10));
            n /= 10;
        }
        return ans;
    }
    bool isHappy(int n) {
        if(n < 10)return n == 1 || n == 7;
        return isHappy(digitSum(n));
    }
};