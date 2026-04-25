// Last updated: 4/25/2026, 10:25:51 AM
1public class Solution {
2    public bool UniqueOccurrences(int[] arr) {
3
4        Dictionary<int,int> freq = new Dictionary<int,int>();
5
6
7        foreach(var num in arr)
8            {  
9                if (freq.ContainsKey(num))
10                freq[num]++;
11                else
12                freq[num] = 1;
13            }
14        
15        HashSet<int> check = new HashSet<int>();
16
17        foreach(var value in freq.Values){
18            if(!check.Add(value))
19            return false;
20        }
21
22        return true;
23    }
24}