// *
 // * Definition for singly-linked list.
 // * public class ListNode {
 // *     int val;
 // *     ListNode next;
 // *     ListNode() {}
 // *     ListNode(int val) { this.val = val; }
 // *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 // * }

class Solution {
    public ListNode reverseList(ListNode head) {
         if(head == null || head.next == null) return head;
        
        ListNode newhead=new ListNode(0);
        newhead.val = head.val;
        newhead.next = null;
        ListNode n = head;
        n=n.next;
        while(n != null){
            ListNode h = new ListNode(n.val);
            h.next=newhead;
            newhead=h;
            
            n=n.next;
        }
        
        return newhead;
        
    }
}
