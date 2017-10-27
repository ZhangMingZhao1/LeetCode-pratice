public class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carry = 0;
        ListNode tail = new ListNode(0);
        ListNode ptr = tail;
        while(l1!=null || l2!=null) {
            int tmp1 = 0;//必须要有，避免长度不一样
            if(l1!=null) {
                tmp1 = l1.val;
                l1 = l1.next;
            }
            int tmp2 = 0;//同上
            if(l2!=null) {
                tmp2 = l2.val;
                l2 = l2.next;
            }
            int tmp = tmp1 + tmp2 + carry;
            carry = tmp/10;
            ptr.next = new ListNode(tmp%10);
            ptr = ptr.next;
        }
        //如果两个链表都为空了，但最后一位进了1的情况
        if(carry==1) {
            ptr.next = new ListNode(1);
        }
        return tail.next;
    }
}
