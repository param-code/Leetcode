class Solution {
public:
    
    int solve(vector<int> &v,int sum){
	int size = v.size();
	int t[size+1][sum+1];
    t[0][0] = 1;
    int k = 1;
	for(int i = 0;i <= size;i++){
		for(int j = 0;j <= sum;j++){
			if (i == 0 && j > 0)
				t[i][j] = 0;
			if (j == 0 && i > 0) {
				if (v[i - 1] == 0) {
					t[i][j] = pow(2, k);
					k++;
				}
				else
					t[i][j] = t[i - 1][j];
			}
		}
	}
	for(int i = 1;i <= size;i++){
		for(int j = 1;j <= sum;j++){
			if(v[i-1] <= j){
				t[i][j] = t[i-1][j] + t[i-1][j-v[i-1]];
			}else t[i][j] = t[i-1][j];
		}
	}
	return t[size][sum];
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(begin(nums),end(nums),0);
        if ((target + sum) % 2 != 0 || target > sum) return 0;
        int s1 = (abs(target)+sum) / 2;
        return solve(nums,s1);
    }
};