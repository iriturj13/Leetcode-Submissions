class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        
        int n= stones.size();
	    int sum=0;
	    
	    for(int i = 0; i<n ;i++)
	    {
	        sum+=stones[i];
	    }
	    //initialise the t matrix
	    
	    int t[n+1][sum+1];
	    for(int i =0; i<n+1 ;i++)
	    {
	       for(int j =0 ; j<sum+1 ;j++)
	       {
	           if(i==0) t[i][j] = 0;
	           if(j==0) t[i][j] = 1;  // as sum=0 is possible for every i/p
	       }
	    }
	    
	    for(int i = 1 ;i<n+1 ;i++){
            for(int j=1;j<sum+1 ;j++){
                if(stones[i-1]<=j)
                {
                    t[i][j] = t[i-1][j-stones[i-1]] || t[i-1][j];
                }
                else
                    t[i][j] = t[i-1][j];
            }
        }
	    
	    int ans = INT_MAX;
	    //All the subset sum which is possible for this n sized stonesay will have true value in table in nth row
	    for(int j = 0; j<sum+1; j++)//Iterating last row where the sum exists
	    {
        // abs(sum - 2*(subset_sum) will give subset sum difference
	        if(t[n][j] == 1)
	            ans = min(ans, abs(sum - 2*j));
	    }
	    return ans;
	} 
};