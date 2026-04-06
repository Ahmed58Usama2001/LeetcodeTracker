// Last updated: 4/6/2026, 12:42:46 PM
1public class Solution {
2    public bool IsPalindrome(string s) {
3        StringBuilder sb = new StringBuilder();
4        s= s.ToLower();
5        foreach (char c in s)
6        {
7            if(char.IsLetterOrDigit(c))
8                sb.Append(c);   
9        }
10        for(int left=0, right = sb.Length-1 ; left<right ; left++, right--)
11        {
12            if(sb[left]!=sb[right])
13            return false;
14        }
15
16        return true;
17    }
18}