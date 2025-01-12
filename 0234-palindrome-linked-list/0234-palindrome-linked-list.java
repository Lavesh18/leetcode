/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode getMiddleNode(ListNode head)
    {
        ListNode fast = head;
        ListNode slow = head;

        while(fast.next !=null &&  fast.next.next!=null)
        {
            fast = fast.next.next;
            slow = slow.next;
        }

        return slow;
    }

    public ListNode reverLL(ListNode head)
    {
        ListNode prev = null;
        ListNode curr = head;

        while(curr!=null)
        {
            ListNode nextNode = curr.next;
            curr.next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
    public boolean isPalindrome(ListNode head) {
        if(head == null || head.next == null)
        {
            return true;
        }

        ListNode middle = getMiddleNode(head);

        ListNode nextStart = reverLL(middle.next);


        ListNode start = head;

        while(nextStart!=null)
        {
            if(start.val != nextStart.val)
            {
                return false;
            }
            start = start.next;
            nextStart = nextStart.next;
        }


        return true;

    }
}