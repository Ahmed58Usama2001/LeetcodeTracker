// Last updated: 4/19/2026, 1:47:00 PM
1public class Solution {
2    public int[][] KClosest(int[][] points, int k) {
3
4        int[][] result = new int[k][];
5
6        var heap = new PriorityQueue<int[],int>();
7
8          foreach (var p in points)
9        {
10            int dist = p[0] * p[0] + p[1] * p[1];
11            heap.Enqueue(p, dist);
12        }
13
14        for (int i = 0; i < k; i++)
15        {
16            result[i] = heap.Dequeue();
17        }
18
19        return result;
20    }
21}