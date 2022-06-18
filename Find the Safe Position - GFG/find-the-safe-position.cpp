// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
  

void solve(vector<int>&v,int k,int index){
       if(v.size()==1)
           return;
       index=(k+index)%v.size();
       v.erase(v.begin()+index);
       solve(v,k,index);
       
   }
   int safePos(int n, int k) {
       // code here
        vector<int>v;
       for(int i=0;i<n;i++){
           v.push_back(i+1);
       }
       solve(v,k-1,0);
       return v[0];
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}  // } Driver Code Ends