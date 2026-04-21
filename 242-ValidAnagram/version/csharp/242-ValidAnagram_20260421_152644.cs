// Last updated: 4/21/2026, 3:26:44 PM
1public class Solution {
2    public bool IsAnagram(string s, string t) {
3        
4        int[] freq = new int[26];
5
6        foreach(char c in s)
7        freq[c-'a']++;
8
9        foreach(char c in t)
10        freq[c-'a']--;
11
12        for(int i=0;i<26;i++)
13        {
14            if(freq[i]!=0)
15            return false;
16        }
17
18
19        return true;
20    }
21}