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
    public int treeHeight(TreeNode root)
    {
        if(root == null)
        {
            return 0;
        }

        int lRoot = treeHeight(root.left);
        int rRoot = treeHeight(root.right);


        if(lRoot>rRoot){
            return lRoot+1;
        }
        else
            return rRoot+1;
    }
    public boolean isBalanced(TreeNode root) {
        if(root==null)
        {
            return true;
        }
        int lRoot = treeHeight(root.left);
        int rRoot = treeHeight(root.right);

        if(Math.abs(lRoot-rRoot)>1)
        {
            return false;
        }

        return (isBalanced(root.left) && isBalanced(root.right));
    }
}