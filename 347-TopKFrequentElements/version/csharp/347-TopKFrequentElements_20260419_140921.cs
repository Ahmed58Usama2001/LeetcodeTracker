// Last updated: 4/19/2026, 2:09:21 PM
1public class Solution {
2    public int[] TopKFrequent(int[] nums, int k) {
3        Dictionary<int,int> freq = new Dictionary<int,int>();
4         PriorityQueue <int,int> pq = new PriorityQueue<int,int>();
5         int[] result = new int[k];
6
7        foreach(var num in nums){
8            if(!freq.ContainsKey(num))
9                freq[num]=0;
10
11            freq[num]-=1;
12        }
13
14        foreach(var item in freq){
15            int element = item.Key;
16            int count = item.Value;
17
18            pq.Enqueue(element,count);
19        }
20
21        for(int i=0;i<k;i++)
22        result[i]=pq.Dequeue();
23
24        return result;
25    }
26}