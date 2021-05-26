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
    void TreePaths(TreeNode *root,string p,vector<string>&path)
    {
        if(!root)
            return;
        if(p.size()!=0)
            p+="->";
        p+=to_string(root->val);
        
        TreePaths(root->left,p,path);
        TreePaths(root->right,p,path);
        
        if(!root->left && !root->right)
        {
            path.push_back(p);
        }
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> path;
        TreePaths(root,"",path);
        return path;
    }
};