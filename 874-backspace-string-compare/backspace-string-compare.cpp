class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stk1;
        stack<char>stk2;

        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i]))
            stk1.push(s[i]);
             else if(s[i]=='#' && !stk1.empty())
            stk1.pop();
        }

        for(int i=0;i<t.length();i++)
        {
            if(isalpha(t[i]))
            stk2.push(t[i]);
            else if(t[i]=='#' && !stk2.empty())
            stk2.pop();
        }

        string s2="";
        string t2="";

        while(!stk1.empty())
        {
            s2+=stk1.top();
            stk1.pop();
        }

        while(!stk2.empty())
        {
            t2+=stk2.top();
            stk2.pop();
        }

        return s2==t2;
    }
};