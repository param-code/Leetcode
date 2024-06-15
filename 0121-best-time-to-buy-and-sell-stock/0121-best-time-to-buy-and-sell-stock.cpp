class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int start = 0;
        int end = 0;
        ex: for(int i = start + 1;i < prices.size();i++){
            if(prices[start] < prices[i]){
                ans = max(ans,prices[i] - prices[start]);
            }else if(i == prices.size()-1 || start < prices.size()){start++;goto ex;}
        }
        return ans;
    }
};