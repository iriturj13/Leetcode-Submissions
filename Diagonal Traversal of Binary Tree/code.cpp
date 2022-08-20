/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void postorder(TreeNode* A,map<int,vector<int>> &m,int d)
{
    if(!A) return;
    m[d].push_back(A->val);
    if(A->left)postorder(A->left,m,d+1);
    if(A->right)postorder(A->right,m,d);
}
vector<int> Solution::solve(TreeNode* A) 
{
  vector<int> v;
  if(!A) return v;
  map<int,vector<int>> m;
  int d=0;
  postorder(A,m,d);
  
  
  for(auto x: m)
  {
      for(auto y: x.second)
      {
          v.push_back(y);
      }
  }return v;
  
   
}

