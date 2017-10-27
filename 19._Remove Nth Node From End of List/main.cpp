/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public static ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode tail = new ListNode(0);
        tail.next = head;
        ListNode ptr = tail;
        int len = 0;

        while(ptr!=null) {
            ptr = ptr.next;
            len++;
        }
        len--;
        len-=n;
        ptr = tail;
        int cnt = 0;
        while(cnt!=len) {
            ptr = ptr.next;
            cnt++;
        }
        ptr.next = ptr.next.next;//不影响ptr.next.next后面的连接，头结点的意义也在于此

        return tail.next;
    }
}
