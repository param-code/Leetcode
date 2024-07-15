class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int temp = *max_element(nums.begin(),nums.end());
        int sum = 0;
        for(int i = 0;i < k;i++){
            sum += temp;
            temp += 1;
        }
        return sum;
    }
};