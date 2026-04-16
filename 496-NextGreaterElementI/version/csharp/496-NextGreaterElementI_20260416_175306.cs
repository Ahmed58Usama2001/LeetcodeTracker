// Last updated: 4/16/2026, 5:53:06 PM
1public class Solution {
2    public int[] NextGreaterElement(int[] nums1, int[] nums2) {
3
4        Stack<int> s = new Stack<int>();
5        Dictionary<int, int> d = new Dictionary<int, int>();
6
7       
8        foreach(var x in nums2){
9            while(s.Count > 0 && x>s.Peek())
10            {
11                d[s.Peek()]=x;
12                s.Pop();
13            }
14            s.Push(x);
15        }
16
17        int[] result = new int[nums1.Length];
18
19        for (int i = 0; i < nums1.Length; i++)
20        {
21            if (d.ContainsKey(nums1[i]))
22                result[i] = d[nums1[i]];
23            else
24                result[i] = -1;
25        }
26
27        return result;
28    }
29}