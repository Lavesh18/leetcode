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
    
//     double average(vector<int>arr)
//     {
//         int n = arr.size();
//         int sum = 0;
        
//         for(int i=0;i<=n;i++)
//         {
//             sum = sum + arr[i];
            
//         }
//         return sum/size*10^-5;
//     }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>res;
        
        queue<TreeNode* > q;
        q.push(root);
        if(root==NULL)
            return res;
        
        while(!q.empty())
        {
            double sum = 0;
            
            
            int size = q.size();
            
            for(int i=0;i<size;i++)
            {
                TreeNode *t = q.front();
                sum = sum+t->val;
                if(t->left != 0)
                    q.push(t->left);
                if(t->right!=0)
                    q.push(t->right);
                q.pop();
            }
            res.push_back(sum/size);
        }
        return res;
        
        
    }
};