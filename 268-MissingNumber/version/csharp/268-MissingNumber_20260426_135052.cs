// Last updated: 4/26/2026, 1:50:52 PM
1public class Solution {
2    public int MissingNumber(int[] nums) {
3        int n =nums.Length+1;
4        bool[] boolArray = new bool[n];
5
6        foreach(int num in nums)
7        boolArray[num]=true;
8
9        for(int i=0;i<n;i++)
10        if(boolArray[i]==false)
11        return i;
12
13        return -1;
14    }
15}