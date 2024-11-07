class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string n = s;
        reverse(begin(n),end(n));
        return s == n;
    }
};