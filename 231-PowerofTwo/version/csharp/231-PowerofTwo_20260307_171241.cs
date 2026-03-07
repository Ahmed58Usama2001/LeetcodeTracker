// Last updated: 3/7/2026, 5:12:41 PM
1public class Solution {
2    public bool IsPowerOfTwo(int n) {
3        if(n<=0)
4        return false;
5
6        while(n%2 ==0)
7        n/=2;
8
9
10        return n==1;
11
12    }
13}