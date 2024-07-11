class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        queue<int> alice;
        queue<int> bob;
        sort(nums.begin(),nums.end());
        for(int i = 0;i < nums.size();i++){
            if(i % 2 == 0)alice.push(nums[i]);
            else bob.push(nums[i]);
        }
        nums.clear();
        while(!bob.empty() || !alice.empty()){
            int x = bob.front();
            nums.push_back(x);
            int y = alice.front();
            nums.push_back(y);
            bob.pop();
            alice.pop();
        }
        return nums;
    }
};