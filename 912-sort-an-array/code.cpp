class Solution {
public:

void merge(vector<int> &a , int l , int mid , int h)     // make sure you passed be reference else changes wont reflect 
    {
        vector<int> x(a.begin()+l, a.begin()+mid+1);         // making temp array for 1st segment 
        vector<int> y(a.begin()+mid+1, a.begin()+h+1);  // making temp array for  2nd segment
        
        int n = x.size();
        int m = y.size();
        int i,j,k;  i=j=0;  k=l;
        
        while(i<n and j<m)                                  // standard merging algo as explained in video
            a[k++] = (x[i]<y[j]) ? x[i++] : y[j++];
        while(i<n)
            a[k++] = x[i++];
        while(j<m)
            a[k++] = y[j++];         
	}        
    void mergeSort(vector<int> &a , int l , int h)     // this function recursively calls itself until segment is greater than 1 length
    {
        if(l<h)
        {
            int mid = l+(h-l)/2;
            mergeSort(a,l,mid);
            mergeSort(a,mid+1,h);
            merge(a,l,mid,h);
        }
    }    
    vector<int> sortArray(vector<int>& nums) {        
        int n = nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }


 // above Code taken from Discussion
};
        
        //Binary Search ! TLE
//         int left = 0 , right = nums.size()-1;
//         int mid = left+(right-left/2);
        
//         while(left<=right)
//         {    
//             if(nums[left]==nums[mid]){
//                 left++;
//                 right--;
            
//             } else if(nums[left]>nums[mid]){
//                 swap(nums[left],nums[mid]);
//                 left = mid+1;
                
//             }
//             else
//             {
//                 swap(nums[mid],nums[right]);
//                 right =mid-1;
                
//             }
//         }return nums;
//         }
    
// };
        
  //Based on Recursion only!
        
//          void insert(vector<int> &nums, int temp)
//     {
//         if(nums.size()==0 || nums[nums.size()-1]<=temp)
//         {
//             nums.push_back(temp);
//             return;
//         }
//         int val= nums[nums.size()-1];
//         nums.pop_back();
//         insert(nums,temp);
//         nums.push_back(val);
//         return;
//         }
//     vector<int> sortArray(vector<int>& nums) {
//         if(nums.size()==1)
//             return nums;
//         int temp = nums[nums.size()-1];
//         nums.pop_back();
//         sortArray(nums);
//         insert(nums,temp);
//         return nums;
//         }
        
//     }
//};
