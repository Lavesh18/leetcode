/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
struct ListNode* ptr1=head;
    struct ListNode* ptr2=head;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->val==ptr2->val)
        {
            ptr2=ptr2->next;
            ptr1->next=ptr2;
        }
        else
        {
            ptr1=ptr1->next;
        }
}
    return head;
}