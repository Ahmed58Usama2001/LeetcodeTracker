class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0;
        unordered_map<char,int>hash;

        for(int i=0;i<s.length();i++)
        hash[s[i]]++;

        bool odd_exists=false;

        for(auto x:hash)
        {
         if(x.second%2==0)
            ans+=x.second;
         else
         {  odd_exists=true;
            ans+=x.second-1;
         }
        }

        if(odd_exists)
        ans++;

        return ans;
    }
};