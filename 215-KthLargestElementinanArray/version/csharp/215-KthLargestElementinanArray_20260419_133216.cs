// Last updated: 4/19/2026, 1:32:16 PM
1public class Solution {
2    public int FindKthLargest(int[] nums, int k) {
3        var minHeap = new PriorityQueue<int,int>();
4
5        foreach(var num in nums)
6        minHeap.Enqueue(num,-num);
7
8        while(k-->1)
9        minHeap.Dequeue();
10
11        return minHeap.Peek();
12    }
13}