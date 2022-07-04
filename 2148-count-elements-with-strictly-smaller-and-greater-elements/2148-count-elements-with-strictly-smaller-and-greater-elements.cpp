class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int small =  nums[0];
        int large = nums[nums.size()-1];
        int count = 0;
        for(int i = 1 ; i <nums.size() ; i++)
        {
            if(nums[i] > small && nums[i] < large) 
                count++;
        }
        return count;
    }
};