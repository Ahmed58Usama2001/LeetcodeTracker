// Last updated: 4/28/2026, 1:36:45 PM
1public class Solution {
2    public bool IsAlienSorted(string[] words, string order) {
3        int[] rank = new int[26];
4
5        for(int i=0;i<order.Length;i++)
6        rank[order[i]-'a']=i;
7
8        for(int i=0;i<words.Length-1;i++)
9         if(!InCorrectOrder(words[i],words[i+1],rank))
10             return false;
11
12        return true;
13    }
14
15
16    private bool InCorrectOrder(string w1, string w2, int[] rank)
17    {
18        int len = Math.Min(w1.Length, w2.Length);
19
20        for (int i = 0; i < len; i++){
21            if (w1[i] != w2[i])
22            {
23                return rank[w1[i] - 'a'] < rank[w2[i] - 'a'];
24            }
25        }
26
27        return w1.Length <= w2.Length;
28    }
29}