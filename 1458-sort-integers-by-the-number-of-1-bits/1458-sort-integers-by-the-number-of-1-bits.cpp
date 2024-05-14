class Solution {
public:
    static int setBits(int n){
        int count = 0;
        while(n > 0){
            int bit = n & 1;
            if(bit)count++;
            n >>= 1;
        }
        return count;
    }
    static bool compare(int a,int b){
        if(setBits(a) == setBits(b))return a < b;
        return setBits(a) < setBits(b);
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(begin(arr),end(arr),compare);
        return arr;
    }
};