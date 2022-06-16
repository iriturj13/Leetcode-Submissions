class Solution {
public:
    void sortColors(vector<int>& nums) {
        int tmp = 0, low = 0, mid = 0, high = nums.size() - 1;
    
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                tmp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = tmp;
                low++;
                mid++;
            }
            else if(nums[mid] == 1)
            {
                mid++;
            }
            else if(nums[mid] == 2)
            {
                tmp = nums[high];
                nums[high] = nums[mid];
                nums[mid] = tmp;
                high--;
            }
        }
        
        
        
        
//        //TLE  
//         int low=0;
//         int high=nums.size()-1;
//         int mid=0;
        
//         while(mid<=high){
//             switch(nums[mid]){
                    
//                 case 0:
//                     swap(nums[low++],nums[mid++]);
//                     return;
                        
//                 case 1:
//                     mid++;
//                     return ;
//                 case 3:
//                     swap(nums[mid],nums[high--]);
//                         return;
//             }
//         }
  }
};