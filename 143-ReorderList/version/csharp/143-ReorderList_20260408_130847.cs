// Last updated: 4/8/2026, 1:08:47 PM
1/**
2 * Definition for singly-linked list.
3 * public class ListNode {
4 *     public int val;
5 *     public ListNode next;
6 *     public ListNode(int val=0, ListNode next=null) {
7 *         this.val = val;
8 *         this.next = next;
9 *     }
10 * }
11 */
12public class Solution {
13    public void ReorderList(ListNode head) {
14        if (head==null || head.next ==null)
15        return;
16
17        ListNode middle = MidNode(head);
18        ListNode newHead = middle.next;
19        middle.next = null;
20
21        newHead = ReverseLinkedList(newHead);
22
23        ListNode c1=head,c2=newHead,f1=null,f2=null;
24
25        while(c1!=null && c2!=null)
26        {
27            f1=c1.next;
28            f2=c2.next;
29
30            c1.next=c2;
31            c2.next=f1;
32
33            c1=f1;
34            c2=f2;
35        }
36    }
37
38    private ListNode MidNode(ListNode head){
39        ListNode slow=head,fast=head;
40
41        while(fast.next!=null && fast.next.next!=null){
42            slow=slow.next;
43            fast=fast.next.next;
44        }
45
46        return slow;
47    }
48
49    private ListNode ReverseLinkedList (ListNode head)
50    {
51        ListNode prv = null;
52        ListNode cur = head;
53        ListNode forw = null;
54
55        while(cur!=null){
56            forw=cur.next;
57            cur.next=prv;
58            prv=cur;
59            cur=forw;
60        }
61
62        return prv;
63    }
64
65
66}