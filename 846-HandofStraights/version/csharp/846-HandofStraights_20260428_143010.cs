// Last updated: 4/28/2026, 2:30:10 PM
1public class Solution {
2    public bool IsNStraightHand(int[] hand, int groupSize) {
3        if(hand.Length%groupSize != 0)
4        return false;
5
6        SortedDictionary<int, int> freq = new SortedDictionary<int, int>();
7        int count,current;
8
9        foreach (var num in hand)
10        {
11            if (!freq.ContainsKey(num))
12                freq[num] = 0;
13
14            freq[num]++;
15        }
16
17
18        foreach(var key in new List<int>(freq.Keys)){
19            count = freq[key];
20
21            if(count>0){
22                for(int i=0;i<groupSize;i++){
23                    current=key+i;
24                    if(!freq.ContainsKey(current) || freq[current]<count)
25                    return false;
26
27                    freq[current]-=count;
28                }
29            }
30        }
31
32        return true;
33    }
34}