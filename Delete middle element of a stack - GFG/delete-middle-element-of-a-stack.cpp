// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
   void deleteM(stack<int>&st,int &mid)
   {
       if(st.size()==mid)
       {
           st.pop();
           return;
       }
       int temp = st.top();
       st.pop();
       deleteM(st,mid);
       
       st.push(temp);
   }
   public:
   //Function to delete middle element of a stack.
   void deleteMid(stack<int>&s, int sizeOfStack)
   {
       if(s.empty()) return;
       int mid = ceil((sizeOfStack+1)/2);
      deleteM(s,mid);
      return;
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends