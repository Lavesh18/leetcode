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
    TreeNode *swapTree(TreeNode*root)
    {
        if(root==NULL)
            return NULL;
        TreeNode*t=root->right;
        root->right=root->left;
        root->left=t;
        
        swapTree(root->right);
        swapTree(root->left);
        return root;
    }
    TreeNode* invertTree(TreeNode* root) {
        return swapTree(root);
    }
};