class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int ans = 0;
        sort(begin(students),end(students));
        sort(begin(seats),end(seats));
        for(int i = 0;i < seats.size();i++){
            ans += abs(students[i]-seats[i]);
        }
        return ans;
    }
};