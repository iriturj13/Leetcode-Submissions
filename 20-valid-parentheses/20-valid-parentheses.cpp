class Solution {
public:
    bool isValid(string s) {
         stack<char> stack_;
        for(int i=0; i < s.size(); i++) {
            if ((s[i] == '(') || (s[i] == '{') || (s[i] == '[')) {stack_.push(s[i]);}
            else {
                if (stack_.empty()) {return false;}
                if((s[i] == ')') && (stack_.top() != '(')) {return false;}
                if((s[i] == '}') && (stack_.top() != '{')) {return false;}
                if((s[i] == ']') && (stack_.top() != '[')) {return false;}
                stack_.pop();
            }
        }
        return stack_.empty();
        
        
    }
};