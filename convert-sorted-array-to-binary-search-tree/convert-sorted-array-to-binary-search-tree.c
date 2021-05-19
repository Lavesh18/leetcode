/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* traverse(int *nums,int start,int end)

{
    int mid=(start+end)/2;
    if(end<start)
        return NULL;
    struct TreeNode *root=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val=nums[mid];
    root->left=traverse(nums,start,mid-1);
    root->right=traverse(nums,mid+1,end);
    
    return root;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
if(numsSize<1 || nums==NULL)
    return NULL;
    
return traverse(nums,0,numsSize-1);
}