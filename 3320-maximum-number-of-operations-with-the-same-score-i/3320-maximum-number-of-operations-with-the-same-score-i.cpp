class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int count = 0;
        int sum = nums[0] + nums[1];
        int f = 0;
        int s = 1;
        while(f < nums.size() && s < nums.size()){
            if(nums[f] + nums[s] == sum)count++;
            else break;
            f+=2;
            s+=2;
        }
        return count;
    }
};