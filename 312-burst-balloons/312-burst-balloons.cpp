class Solution {
public:
    int t[501][501];
    int solve(vector<int>& arr , int i , int j)
    {
        if(i>=j)
        return 0;
        if(t[i][j]!=-1)
          return t[i][j];
        int mn=INT_MIN;
        for (int k=i;k<=j-1;k++){
            int temp=solve(arr,i,k)+solve(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
             mn=max(temp,mn);
        }
       return t[i][j]=mn;
    }
    int maxCoins(vector<int>& nums) {
         int N=nums.size();
         memset(t,-1,sizeof(t));
         vector<int>arr(N+2);
         int n=arr.size();
         arr[0]=1;
         arr[n-1]=1;
        for(int i = 1;i<=nums.size();i++){
            arr[i]=nums[i-1];   
        }
        return solve(arr,1,n-1);  
    }
};