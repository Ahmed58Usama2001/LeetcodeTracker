// Last updated: 4/28/2026, 2:29:00 PM
1public class Solution {
2    public bool IsPossibleDivide(int[] nums, int k) {
3
4        if(nums.Length%k != 0)
5        return false;
6
7        SortedDictionary<int, int> freq = new SortedDictionary<int, int>();
8        int count,current;
9
10        foreach (var num in nums)
11        {
12            if (!freq.ContainsKey(num))
13                freq[num] = 0;
14
15            freq[num]++;
16        }
17
18
19        foreach(var key in new List<int>(freq.Keys)){
20            count = freq[key];
21
22            if(count>0){
23                for(int i=0;i<k;i++){
24                    current=key+i;
25                    if(!freq.ContainsKey(current) || freq[current]<count)
26                    return false;
27
28                    freq[current]-=count;
29                }
30            }
31        }
32
33        return true;
34    }
35}