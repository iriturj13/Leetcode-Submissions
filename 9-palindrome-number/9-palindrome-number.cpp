class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string s= str;
        reverse(s.begin(),s.end());
        return (s==str);
    }
};