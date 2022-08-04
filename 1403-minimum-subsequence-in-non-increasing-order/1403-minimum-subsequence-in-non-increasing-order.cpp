class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        

        int sum=0,newSum=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        
        sort(nums.begin(),nums.end(),greater<int>());
        
        for(int i=0;i<nums.size();i++)
        {
            newSum+=nums[i];
            sum=sum-nums[i];
            ans.push_back(nums[i]);
            if(newSum>sum)
                break;
        }return ans;
        
    }
};