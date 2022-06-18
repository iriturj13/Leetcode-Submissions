class Solution {
public:
    
    void solve(int open, int close, string op , vector<string> &ans)
    {
        if(open==0 && close ==0)
        {
            ans.push_back(op);
            return;
        }
        //for open bracket, choice is always there.. so,,
        if(open!=0)
        {
            string op0 = op;
            op0.push_back('(');
            solve(open-1,close,op0,ans);
        }
        if(close>open)  // whenevr , close's count is greater than the open's we have only one choice , i.e to add the closing brace.
        {
            string op1 = op;
            op1.push_back(')');
            solve(open,close-1,op1,ans);
        }
    }
        
        
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open =n ,close =n;
        string op ="";
        
        solve(open,close,op,ans);
        return ans;
    }
};