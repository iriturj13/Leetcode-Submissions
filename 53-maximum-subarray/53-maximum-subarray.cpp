class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        const int n = nums.size();
        int curSum = 0;
        int finSum = nums[0];
        for (int i = 0, j = 0; i < n; ++i)
        {
            curSum += nums[i];
            while(nums[i]>curSum) curSum-=nums[j++];
            finSum = max(finSum, curSum);
        }
        return finSum;
    }
 
};
        