// Last updated: 4/21/2026, 3:18:01 PM
1public class Solution {
2    public int[] TwoSum(int[] nums, int target) {
3        int[] result = new int[2];
4
5        Dictionary<int,int> dic = new Dictionary<int,int>();
6
7        for(int i=0;i<nums.Length;i++)
8            {   
9                if(!dic.ContainsKey(nums[i]))
10                dic.Add(nums[i],i);
11                else if(target == nums[i] *2)
12                {   
13                    result[0]=dic[nums[i]];
14                    result[1]=i;
15                    return result;
16                }
17
18            }
19        
20        for(int i =0;i<nums.Length;i++)
21        {
22            if(dic.ContainsKey(target-nums[i]) && dic[target-nums[i]]!=i)
23            {
24                result[0]=i;
25                 result[1]=dic[target-nums[i]];
26                break;
27            }
28        }
29
30        return result;
31    }
32}