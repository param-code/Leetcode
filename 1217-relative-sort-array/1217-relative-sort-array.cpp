class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int arr[1001];
        for(auto x:arr1){
            arr[x]++;
        }
        vector<int> ans;
        for(auto x:arr2){
            if(arr[x] == 0)ans.push_back(x);
            int n = arr[x];
            for(int i = 0;i < n;i++){
                ans.push_back(x);
                arr[x]--;
            }
        }
        for(int i = 0;i < 1001;i++){
            if(arr[i] > 0){
                for(int j = 0;j < arr[i];j++){
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};