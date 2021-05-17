/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int max(int a,int b)
{
    if(a>b)
        return a;
    else
         return b;
}
int minDepth(struct TreeNode* root){
if(root==NULL)
    return 0;
    if(!root->left && root->right || root->left && !root->right)
    {
        return 1 + max(minDepth(root->left),minDepth(root->right));
    }
    if(root->left && root->right)
    {
        int l=minDepth(root->left);
        int r=minDepth(root->right);
        return 1+min(l,r);
        
    }
    return 1;
}


