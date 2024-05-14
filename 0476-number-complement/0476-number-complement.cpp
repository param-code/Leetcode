class Solution {
public:
    int findComplement(int num) {
        string s = "";
        while(num > 0){
            s = to_string((num % 2) ^ 1) + s;
            num /= 2;
        }
        int x = 0;
        for(int i = s.size()-1;i >= 0;i--){
            if(s[i] == '0')x += (pow(2,(s.size()-1-i)) * 0);
            else x += (pow(2,s.size()-1-i) * 1);
        }
        return x;
    }
};