/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int height(TreeNode* root,int &d)
    {
        if(!root) return 0;
        
        int lh = height(root->left ,d);
        int rh = height(root->right,d);
        if(1+lh+rh>d)
        {
            d= 1+lh+rh;
        }
        
        //return 
        return 1+max(lh,rh);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int d = INT_MIN;
        height(root,d);
        return d-1;
        
    }
};