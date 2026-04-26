// Last updated: 4/26/2026, 1:22:31 PM
1public class Solution {
2    public bool ContainsNearbyDuplicate(int[] nums, int k) {
3        Dictionary<int,int> dict = new Dictionary<int,int>();
4
5        for(int i=0;i<nums.Length;i++){
6            if(!dict.ContainsKey(nums[i]))
7            dict.Add(nums[i],i);
8            else{
9                if(Math.Abs(i-dict[nums[i]])<=k)
10                return true;
11                else
12                dict[nums[i]]=i;
13            }
14        }
15
16        return false;
17    }
18}