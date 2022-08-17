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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
    stack<TreeNode *> s1;
        stack<TreeNode *> s2;
        vector<vector<int>>v;
        if(root==NULL) return v;
        s1.push(root);
        while(!s1.empty()||!s2.empty()){
            vector<int> v1;
            while(!s1.empty()){
                TreeNode* Node=s1.top();
                s1.pop();
                v1.push_back(Node->val);
                if(Node->left)
                    s2.push(Node->left);
                if(Node->right)
                    s2.push(Node->right);
             }
            v.push_back(v1);
            vector<int> v2;
            while(!s2.empty()){
                TreeNode *Node=s2.top();
                s2.pop();
                v2.push_back(Node->val);
                if(Node->right)
                    s1.push(Node->right);
                if(Node->left)
                    s1.push(Node->left);
                
                
            }
             if(!v2.empty()) v.push_back(v2);
            
            
            
        }
        return v;
    }

};