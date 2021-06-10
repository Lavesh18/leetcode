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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode*ptr=head;
        stack<int>s;
        while(ptr!=NULL)
        {
            s.push(ptr->val);
            ptr=ptr->next;
        }
        
        while(head!=NULL)
        {
            int check=s.top();
            s.pop();
            
            if(head->val!=check)
                    return false;
            head=head->next;
        }
        return true;
    }
};