class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        multiset<int> ms(nums.begin(),nums.end());
        int sum = accumulate(begin(nums),end(nums),0);
        // sort(begin(nums),end(nums));
        int ans = INT_MIN;
        // int n = nums.size()-1;
        // if(sum > nums[n]){sum -= nums[n];sum -= nums[n-1];if(sum == nums[n]){
        //     return nums[n-1];
        // }else return nums[n];}
        // else sum -= nums[0];
        // return nums[n];
        for(auto &num:nums){
            ms.erase(ms.find(num));
            sum -= num;
            int temp = sum/2;
            if(sum % 2 == 0 && ms.count(temp)){
                ans = max(ans,num);
            }
            sum += num;
            ms.insert(num);
        }
        return ans;
    }
};