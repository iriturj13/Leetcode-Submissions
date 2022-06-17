// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    
    int find(int i, vector<int>&arr, int n,vector<vector<int>>&output, set<vector<int> >&s)
   {
       if(i==n)// reached at the end of the array
       {
           return 1;
       }
       int small_size=find(i+1,arr,n,output,s);//recursive call
       
       for(int j=0;j<small_size;j++)   //small calculation.
       {
           vector<int>temp;              
           temp.push_back(arr[i]);
           for(int k=0;k<output[j].size();k++)
           {
               temp.push_back(output[j][k]);
           }
           sort(temp.begin(),temp.end());
           if(s.find(temp)==s.end())//check whether already
           {                        //present or not
               output.push_back(temp); 
               
               s.insert(temp);
           }
       }
       
       return output.size(); // return final size of output arr    
   }
   vector<vector<int> > AllSubsets(vector<int> arr, int n)
   {
       
       vector<vector<int>>output(1);
       set<vector<int> >s;
       int size=find(0,arr,n,output,s);
       sort(output.begin()+1,output.end());
       return output;
       
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends