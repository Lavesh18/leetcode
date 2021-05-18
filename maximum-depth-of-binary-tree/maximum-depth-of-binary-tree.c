/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a,int b)
{
    if(a>b)
        return a;
    else
         return b;
}

int maxDepth(struct TreeNode* root){
if(root==NULL)
    return 0;
    if(!root->left && root->right || root->left && !root->right)
    {
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
    if(root->left && root->right)
    {
        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
        return 1+max(l,r);
        
    }
    return 1;
    
}


