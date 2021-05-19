/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
if(!root)
    return root;
    struct TreeNode* right=root->right;
    root->right=invertTree(root->left);
    root->left=invertTree(right);
    return root;
}