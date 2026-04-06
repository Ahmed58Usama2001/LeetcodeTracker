// Last updated: 4/6/2026, 12:41:18 PM
1public class Solution {
2    public bool IsPalindrome(string s) {
3        StringBuilder sb = new StringBuilder();
4        s= s.ToLower();
5        foreach (char c in s)
6        {
7            if(char.IsLetterOrDigit(c))
8               { sb.Append(c);
9
10               }
11        }
12        Console.WriteLine(sb);
13        for(int left=0, right = sb.Length-1 ; left<right ; left++, right--)
14        {
15            if(sb[left]!=sb[right])
16            return false;
17        }
18
19        return true;
20    }
21}