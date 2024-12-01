class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0,hi = nums.size()-1;
        if(target > nums[hi])return nums.size();
        while((hi-lo) > 1){
            int mid = (lo+hi) / 2;
            if(nums[mid] < target)lo = mid+1;
            else hi = mid;
        }
        if(nums[lo] >= target)return lo;
        else return hi;
    }
};