/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head,ListNode *tail=NULL) {
        if(head==tail)
            return NULL;
        ListNode *p1=head,*p2=head;
        while(p2!=tail && p2->next!=tail)
        {
            p1=p1->next;
            p2=p2->next->next;
         }
        
        TreeNode* root = new TreeNode(p1->val);
        root->left=sortedListToBST(head,p1);
        root->right=sortedListToBST(p1->next,tail);
        return root;
    }
};
