class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> ans;
        for(int i = 0; i<nums.size() ; i++)
        {
            sum+=nums[i];
            ans.push_back(sum);
           
        }return ans;
    }
};