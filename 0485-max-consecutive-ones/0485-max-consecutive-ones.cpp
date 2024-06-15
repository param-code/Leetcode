class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int count = 0;
        bool pro = false;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 1){
                pro = true;
            }else {pro = false;count = 0;}
            if(pro)count++;
            ans = max(ans,count);
        }
        return ans;
    }
};