// Last updated: 4/8/2026, 12:06:38 PM
public class Solution {
    public int FindMiddleIndex(int[] nums) {
        int totalSum=0,leftSum=0,rightSum;
      foreach(var num in nums)
        totalSum+=num;

        for(int i=0;i<nums.Length;i++)
        {
            rightSum=totalSum-nums[i]-leftSum;
            if(leftSum==rightSum)
            return i;

            leftSum+=nums[i];
        }

        return -1;
    }
}