// Last updated: 4/16/2026, 5:45:56 PM
1public class Solution {
2    public int[] NextGreaterElement(int[] nums1, int[] nums2) {
3
4        Dictionary<int, int> d = new Dictionary<int, int>();
5
6        for(int i=0; i<nums2.Length ;i++){
7            d.Add(nums2[i], -1);
8            for(int j=i+1; j<nums2.Length ;j++){
9                if(nums2[j]>nums2[i]){
10                    d[nums2[i]]= nums2[j];
11                    break;
12                }
13            }
14        }
15
16
17        for(int i=0;i<nums1.Length;i++)
18            nums1[i]=d[ nums1[i]]  ;
19
20        return nums1;
21    }
22}