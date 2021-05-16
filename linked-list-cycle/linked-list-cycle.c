/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *p=head;
    while(p && p->next)
    {
        head=head->next;
        p=p->next->next;
        if(head==p)
            return true;
}
    return false;
    
}
