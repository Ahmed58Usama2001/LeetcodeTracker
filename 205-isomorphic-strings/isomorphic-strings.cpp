class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map;
        unordered_map<char,bool>mapped;

        for(int i=0;i<s.length();i++)
        {
            if((map.find(s[i])!=map.end() && t[i] !=map[s[i]]) || (mapped[t[i]] &&map.find(s[i])==map.end()))
            return false;
            else
            {map[s[i]]=t[i];
            mapped[t[i]]=true;
            }
        }

        int order;
        char a,b;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            order=0;
            else if (s[i]>s[i-1])
            order=1;
            else
            order=-1;

            a=s[i];
            b=s[i-1];

            if(a==b && order!=0 || a>b && order!=1 || a<b && order!=-1)
            return false;

        }

        return true;
    }
};