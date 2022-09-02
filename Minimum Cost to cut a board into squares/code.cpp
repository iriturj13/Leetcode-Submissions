//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){
        int h =1,v=1;
        int cost =0;
        sort(X.begin(),X.end());
        
        sort(Y.begin(),Y.end());
        int m = X.size()-1 ,n = Y.size()-1;
        
        
        while(m>=0 && n>=0)
        {
            if(X[m]>=Y[n])
            {
                cost+=v*X[m];
                h++;
                m--; //index decrement
            }
            else
            {
                cost+=h*Y[n];
                n--;
                v++;
            }
        }
        while(m>=0)
        {
            cost+=X[m]*v;
            
            m--;
        }
        while(n>=0)
        {
            cost +=h*Y[n];
            n--;
        }
        return cost;
    }
    
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int m, n;
	    cin >> m >> n;
	    vector<int>X(m - 1), Y(n - 1);
	    for(int i = 0; i < m - 1; i++){
	        cin >> X[i];
	    }
	    for(int i = 0; i < n - 1; i++){
	        cin >> Y[i];
	    }
	    Solution ob;
	    int ans = ob.minimumCostOfBreaking(X, Y, m, n);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends
