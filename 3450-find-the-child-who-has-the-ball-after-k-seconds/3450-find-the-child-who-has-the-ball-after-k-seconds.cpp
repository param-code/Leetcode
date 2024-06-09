class Solution {
public:
    int numberOfChild(int n, int k) {
        int pos = 0;
        int counter = 0;
        bool direction = true;
        while(counter < k){
            counter++;
            if(direction)pos++;
            else pos--;
            if(pos == n-1)direction = false;
            if(pos == 0)direction = true;
        }
        return pos;
    }
};