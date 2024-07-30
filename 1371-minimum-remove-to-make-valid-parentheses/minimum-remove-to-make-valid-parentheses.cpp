class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<int>stk;
        string output="";

        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i]))
            output+=s[i];
            else 
            {
                if(s[i]=='(')
                {
                  output+=s[i];
                  stk.push('(');
                }
                else if(s[i]==')' && !stk.empty() && stk.top()=='(')
                {
                  output+=s[i];
                  stk.pop();
                }
            }
        }

        int ctr=stk.size();
        if(!ctr)
        return output;

        string res="";
        for(int i=output.length()-1;i>=0 ;i--)
        {
            if(output[i]=='(' && ctr)
                ctr--;
            else
                res+=output[i];
        }

        reverse(res.begin(), res.end());
        return res;
    }
};