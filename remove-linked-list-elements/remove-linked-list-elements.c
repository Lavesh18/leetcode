/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
struct ListNode* ptr1=head;
    if(head==NULL)
        return NULL;
    while(ptr1->next)
    {
        if(ptr1->next->val==val){
            ptr1->next=ptr1->next->next;
        }
        else
        {
            ptr1=ptr1->next;
        }
    }
    if(head->val==val)
    {
        head=head->next;
    }
    return head;
}