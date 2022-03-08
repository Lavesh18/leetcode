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
    bool check(ListNode* &left,ListNode* right)
    {
        
        //backtracking
        if(right==NULL)
            return true;
        bool first = check(left,right->next);
        if(!first)
            return false;
        bool second = (right->val == left->val);
        left = left->next;
        return second;
    }
    
    bool isPalindrome(ListNode* head) {
        return check(head,head);
    }
};