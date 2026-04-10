// Last updated: 4/10/2026, 4:12:23 PM
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
13    public ListNode MergeTwoLists(ListNode list1, ListNode list2) {
14        if(list1 ==null)
15        return list2;
16
17        if(list2==null)
18        return list1;
19
20        ListNode result=new ListNode();
21        ListNode cur=result;
22
23        ListNode p1=list1, p2=list2;
24
25        while(p1!=null && p2!=null)
26        {
27            if(p1.val<p2.val)
28            {
29                cur.next=p1;
30                p1=p1.next;
31            }
32            else{
33                cur.next=p2;
34                p2=p2.next;
35            }
36            cur=cur.next;
37            Console.WriteLine(cur.val);
38        }
39
40        if(p1==null)
41        cur.next=p2;
42        else
43        cur.next=p1;
44
45
46        return result.next;
47    }
48}