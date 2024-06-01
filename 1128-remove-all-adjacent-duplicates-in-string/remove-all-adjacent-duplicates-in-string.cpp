class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char> stk1;
        stack<char> stk2;

        for(int i=0;i<s.length();i++)
        {
            if(stk1.empty() || stk1.top()!=s[i])
            stk1.push(s[i]);
            else
            stk1.pop();
        }

        char c;
        while(!stk1.empty())
        {
            c=stk1.top();
            stk1.pop();
            stk2.push(c);
        }

        s="";
        while(!stk2.empty())
           { s+=stk2.top();
            stk2.pop();
          }
        
        return s;

    }
};