// Last updated: 4/25/2026, 10:45:55 AM
1public class Solution {
2    public IList<IList<string>> GroupAnagrams(string[] strs) {
3
4        Dictionary<string,List<string>> dict = new Dictionary<string,List<string>>();
5
6
7        foreach(var s in strs){
8            char[] chars = s.ToCharArray();
9            Array.Sort(chars);
10            string key = new string(chars);
11
12            if (!dict.ContainsKey(key))
13                dict[key] = new List<string>();
14
15            dict[key].Add(s);
16        }
17
18
19        return dict.Values.ToList<IList<string>>();
20
21
22    }
23}