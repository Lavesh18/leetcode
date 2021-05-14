/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxheight(struct TreeNode* root)
{
    if(root==NULL)
        return 0;
    else
    {
        int l=maxheight(root->left);
        int r=maxheight(root->right);
        
        if(l>r)
            return l+1;
        else
            return r+1;
        
    }
}
bool isBalanced(struct TreeNode* root){
if(root==NULL)
    return true;

int lf=maxheight(root->left);
        int rh=maxheight(root->right);
    if(abs(lf-rh)>1)
        return false;
    
    return (isBalanced(root->left) && isBalanced(root->right));
}

