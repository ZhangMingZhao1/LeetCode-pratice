public class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carry = 0;
        ListNode tail = new ListNode(0);
        ListNode ptr = tail;
        while(l1!=null || l2!=null) {
            int tmp1 = 0;//����Ҫ�У����ⳤ�Ȳ�һ��
            if(l1!=null) {
                tmp1 = l1.val;
                l1 = l1.next;
            }
            int tmp2 = 0;//ͬ��
            if(l2!=null) {
                tmp2 = l2.val;
                l2 = l2.next;
            }
            int tmp = tmp1 + tmp2 + carry;
            carry = tmp/10;
            ptr.next = new ListNode(tmp%10);
            ptr = ptr.next;
        }
        //�����������Ϊ���ˣ������һλ����1�����
        if(carry==1) {
            ptr.next = new ListNode(1);
        }
        return tail.next;
    }
}
