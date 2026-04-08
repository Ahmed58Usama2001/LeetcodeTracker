// Last updated: 4/8/2026, 12:06:15 PM
1public class Solution {
2    public int FindMiddleIndex(int[] nums) {
3        int totalSum=0,leftSum=0,rightSum;
4      foreach(var num in nums)
5        totalSum+=num;
6
7        for(int i=0;i<nums.Length;i++)
8        {
9            rightSum=totalSum-nums[i]-leftSum;
10            if(leftSum==rightSum)
11            return i;
12
13            leftSum+=nums[i];
14        }
15
16        return -1;
17    }
18}