// Last updated: 4/25/2026, 10:10:10 AM
1public class Solution {
2    public bool ContainsDuplicate(int[] nums) {
3
4        Dictionary<int,bool> freq = new Dictionary<int,bool>();
5
6        foreach(var num in nums){
7            if(freq.ContainsKey(num))
8            return true;
9            else
10            freq.Add(num,true);
11        }
12
13        return false;
14    }
15}