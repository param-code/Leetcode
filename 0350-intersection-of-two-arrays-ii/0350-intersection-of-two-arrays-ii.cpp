class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(begin(nums1),end(nums1));
        sort(begin(nums2),end(nums2));
        int f = 0;
        int s = 0;
        while(f < nums1.size() && s < nums2.size()){
            if(nums1[f] == nums2[s]){
                ans.push_back(nums1[f]);
                f++;
                s++;
            }else if(nums1[f] < nums2[s])f++;
            else s++;
        }
        return ans;
    }
};