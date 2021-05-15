/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isUnivalTree(struct TreeNode* root){
if(root->right==NULL & root->left==NULL)
    return true;
    else if(root->right==NULL)
    {
        if(root->val==root->left->val)
            return isUnivalTree(root->left);
        else 
            return false;
}
    else if(root->left==NULL)
    {
        if(root->val==root->right->val)
            return isUnivalTree(root->right);
        else 
            return false;
    }
    
    return (root->val==root->left->val && root->val==root->right->val && isUnivalTree(root->left) && isUnivalTree(root->right));
}
