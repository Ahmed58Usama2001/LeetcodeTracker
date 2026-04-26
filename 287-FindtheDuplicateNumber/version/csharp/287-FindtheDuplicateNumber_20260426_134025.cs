// Last updated: 4/26/2026, 1:40:25 PM
1public class Solution {
2    public int FindDuplicate(int[] nums) {
3        int slow = nums[0],fast = nums[0];
4
5        do{
6            slow = nums[slow];
7            fast = nums[nums[fast]];
8        }while(slow!=fast);
9
10        slow=nums[0];
11        while(slow!=fast){
12            slow=nums[slow];
13            fast=nums[fast];
14        }
15
16        return slow;
17    }
18}