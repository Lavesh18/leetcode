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
    void inorder(TreeNode *root,vector<int>&v)
    {
        if(root==NULL)
            return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    TreeNode *tree(vector<int>&v,int i)
    {
        if(i>=v.size())
            return NULL;
        TreeNode*root=new TreeNode(v[i]);
        root->left=NULL;
        root->right=tree(v,i+1);
        return root;
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        TreeNode*r=tree(v,0);
        return r;
    }
};