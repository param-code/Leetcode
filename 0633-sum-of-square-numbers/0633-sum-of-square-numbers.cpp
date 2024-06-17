class Solution {
public:
    bool search(long long start,long long end,long long target){
        if(start > end)return false;
        long long mid = start + (end - start) / 2;
        if((mid * mid) == target)return true;
        else if((mid * mid) > target)return search(start,mid-1,target);
        return search(mid+1,end,target);
    }
    bool judgeSquareSum(int c) {
        for(long long i = 0;(i * i) <= c;i++){
            long long x = c - (i * i);
            if(search(0,x,x))return true;
        }
        return false;
    }
};