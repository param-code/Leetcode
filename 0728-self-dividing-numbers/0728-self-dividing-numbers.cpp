class Solution {
public:
    bool selfDiv(int n){
        if(n < 10)return true;
        int temp = n;
        while(temp > 0){
            int digit = temp%10;
            if(digit == 0 || (n % digit) != 0)return false;
            temp /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left;i <= right;i++){
            if(selfDiv(i))ans.push_back(i);
        }
        return ans;
    }
};