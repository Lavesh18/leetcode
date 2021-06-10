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
    ListNode*merge(ListNode*a,ListNode*b)
    {
        ListNode*r;
        if(a==NULL)
            return b;
        else if(b==NULL)
            return a;
        
        if(a->val<=b->val)
        {
            r=a;
            a->next=merge(a->next,b);
        }
        else{
             r=b;
            b->next=merge(b->next,a);
        }
        return r;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)
            return head ;
        ListNode*temp=head,*slow=head,*fast=head;
        while(fast && fast->next)
        {
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=NULL;
        ListNode*back=sortList(head);
        ListNode*forward=sortList(slow);
        
        return merge(back,forward);
    }
};