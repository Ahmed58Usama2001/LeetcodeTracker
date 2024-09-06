class Solution {
public:
    string removeStars(string s) {
        stack<char>stk;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='*')
            stk.push(s[i]);
            else 
                stk.pop();
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