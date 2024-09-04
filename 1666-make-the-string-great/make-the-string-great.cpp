class Solution {
public:
    string makeGood(string s) {
        stack<char>stk;

        for(int i=0;i<s.length();i++)
        {
            if(!stk.empty() && (stk.top()-'a'==s[i]-'A' || stk.top()-'A'==s[i]-'a'))
            {
                stk.pop();
                continue;
            }
            stk.push(s[i]);
        }

        string res="";

        while(!stk.empty())
        {
            res+=stk.top();
            stk.pop();
        }

        reverse(res.begin(),res.end());
        return res;
    }
};