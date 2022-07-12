class Solution {
public:
    
    vector<vector<int>> subsets(vector<int>& nums) { 
       vector<vector<int>>output(1);
       set<vector<int> >s;
       int n= nums.size();
       int size=find(0,nums,n,output,s);
       sort(output.begin()+1,output.end());
       return output;   
   }     
        
   int find(int i, vector<int>&nums, int n,vector<vector<int>>&output, set<vector<int> >&s)
   {
       if(i==n)// reached at the end of the numsay
       {
           return 1;
       }
       int small_size=find(i+1,nums,n,output,s);//recursive call
       
       for(int j=0;j<small_size;j++)   //small calculation.
       {
           vector<int>temp;              
           temp.push_back(nums[i]);
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
       
       return output.size(); // return final size of output nums    
   }
};