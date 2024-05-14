class Solution {
public:
    int numberOfSteps(int n) {
        int steps = 0;
        while(n > 0){
            if(!(n & 1))n /= 2;
            else n -= 1;
            steps++;
        }
        return steps;
    }
};