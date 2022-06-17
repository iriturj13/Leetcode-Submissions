// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    vector<string> ans;
    void solve(string S,int i,string op)
    {
        if(S.length()==i)
        {
            ans.push_back(op);
            return;
        }
            
        string op1 = op;
        string op2 = op;
        
        op1.push_back(' ');
        op1.push_back(S[i]);
        op2.push_back(S[i]);
       
        
        solve(S,i+1,op1);
        solve(S,i+1,op2);
    }

    vector<string> permutation(string S){
        string op ="";
        op.push_back(S[0]);
        solve(S,1,op);
        return ans;
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends