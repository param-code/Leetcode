class Solution {
public:
    bool prime(int n){
        if(n < 2)return false;
        for(int i = 2;i <= n/2;i++){
            if(n % i == 0)return false;
        }
        return true;
    }
    int setBits(int n){
        int count = 0;
        while(n > 0){
            int bit = n & 1;
            if(bit == 1)count++;
            n >>= 1;
        }
        return count;
    }
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i = left;i <= right;i++){
            if(prime(setBits(i)))count++;
        }
        return count;
    }
};