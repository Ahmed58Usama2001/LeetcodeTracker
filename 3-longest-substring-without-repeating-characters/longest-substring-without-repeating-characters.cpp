class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0, end=0,maxLength=0;
        unordered_map<char,bool>mp;
        while(start<=end&&end<s.length())
        {
            if(mp.count(s[end]))
            {
                mp.clear();
                start++;
                end=start;
            }
            else
            {
                mp[s[end]]=true;
                maxLength=max(maxLength,end-start+1);
                end++;
            }
        }
        return maxLength;
    }
};