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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL)
            return res;
        
        
        queue<TreeNode *>q;
        q.push(root);
        
        while(!q.empty())
        {
            
            
            vector<int>level;
            int n = q.size();
            while(n--){
                TreeNode* t = q.front();
            if(t->left!=0)
                q.push(t->left);
            if(t->right!=0)
                q.push(t->right);
            
            level.push_back(t->val);
            q.pop();
            }
            res.push_back(level);
        }
        
        return res;
    }
};