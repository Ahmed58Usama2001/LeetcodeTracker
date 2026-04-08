// Last updated: 4/8/2026, 12:17:51 PM
1/**
2 * Definition for singly-linked list.
3 * public class ListNode {
4 *     public int val;
5 *     public ListNode next;
6 *     public ListNode(int x) {
7 *         val = x;
8 *         next = null;
9 *     }
10 * }
11 */
12public class Solution {
13    public bool HasCycle(ListNode head) {
14
15        if(head ==null || head.next==null)
16        return false;
17
18        ListNode slow=head,fast=head;
19
20        while(fast != null && fast.next != null)
21        {
22            slow=slow.next;
23            fast=fast.next.next;
24
25            if(slow==fast)
26            return true;
27        }
28
29        return false;
30    }
31}