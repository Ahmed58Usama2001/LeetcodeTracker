class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>stk;
        stk.push(0);
        int cur,parent;
        char c;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            stk.push(0);
            else
            {
                cur=stk.top();
                stk.pop();
                
                if(cur==0)
                cur=1;
                else
                cur*=2;

                parent=stk.top()+cur;
                stk.pop();
                stk.push(parent);
            }
        }

        return stk.top();
    }
};