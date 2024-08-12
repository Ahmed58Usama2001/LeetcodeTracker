class Solution {
public:
    int longestValidParentheses(string s) {
        int ans=0,n=s.length();
        stack<int>stk;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            stk.push(i);
            else
            {
                if(!stk.empty() && s[stk.top()]=='(')
                stk.pop();
                else
                stk.push(i);
            }
        }

        if(stk.empty())
        ans=n;
        else
        {
            int a=n,b=0;
            while(!stk.empty())
            {
                b=stk.top();
                stk.pop();
                ans=max(ans,a-b-1);
                a=b;
            }
            ans=max(ans,a);
        }

        return ans;
    }
};