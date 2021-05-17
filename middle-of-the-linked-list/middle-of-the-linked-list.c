/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){

    struct ListNode* q= head->next;
    
    while(q)
    {
        q=q->next;
        head=head->next;
        if(q)
            q=q->next;
    }
    return head;
}