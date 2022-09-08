/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<TreeNode> generateTrees(int n) {
        if (n == 0) return null;
        List<TreeNode> list = new ArrayList<>();
        
        if(n == 1) {
            list.add(new TreeNode(1, null, null));
            return list;
        }
        
        List<TreeNode> sub = generateTrees(n-1);
        
        for (TreeNode tree: sub) {
            list.add(new TreeNode(1, null, incrementBy(tree, 1)));
            list.add(new TreeNode(n, tree, null));
        }
        
        for (int i = 2; i < n; i++) {
            
            int left = i-1;
            int right = n-i;
            
            List<TreeNode> leftSub = generateTrees(left);
            List<TreeNode> rightSub = generateTrees(right);
            
            for (TreeNode leftTree : leftSub) {
                for (TreeNode rightTree: rightSub) {
                    list.add(new TreeNode(i, leftTree, incrementBy(rightTree, i)));
                }
            }
            
        }
        
        return list;    
        
    }
    
    private TreeNode incrementBy(TreeNode node, int i) {
         if (Objects.isNull(node)) {
            return null;
        }
        
        return new TreeNode(node.val+i, incrementBy(node.left, i), incrementBy(node.right, i));
        
    }
}