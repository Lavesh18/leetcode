/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* buildTree(int* inorder, int inorderSize, int* postorder, int postorderSize){
if(inorderSize==0)
    return NULL;
    
struct TreeNode *root=malloc(sizeof(struct TreeNode));
    int mid=0;
    root->val=postorder[postorderSize-1];
    
    while(inorder[mid]!=root->val)
        mid++;
    
    
    root->left=buildTree(&inorder[0],mid,&postorder[0],mid);
    root->right=buildTree(&inorder[mid+1],inorderSize-mid-1,&postorder[mid],inorderSize-mid-1);
    return root;
}