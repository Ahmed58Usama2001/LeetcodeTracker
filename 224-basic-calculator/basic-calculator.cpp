class Solution {
public:
    int calculate(string s) {
        stack<string>stk;
        string num="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            continue;

            if(s[i]=='(')
            {
                if(num!="")
                {
                    stk.push(num);
                    num="";
                }
                stk.push("(");
            continue;}

            if(s[i]=='+')
            {
                if(num!="")
                {
                    stk.push(num);
                    num="";
                }
            }
            else if(s[i]=='-')
            {
                if(num!="")
                {
                    if(num[num.length()-1]!='-')
                    stk.push(num);

                    num="";
                }
                num.push_back(s[i]);
            }
            else if(s[i]==')')
            {   if(num!="")
                {
                    stk.push(num);
                    num="";
                }
                int sum=0;
                while(stk.top()!="(")
                {
                    int top = stoi(stk.top());
                    stk.pop();
                    sum+=top;
                }
                stk.pop();
                if(!stk.empty() && stk.top()=="-")
                {
                    sum=sum*-1;
                    stk.pop();
                }
                string str_sum=to_string(sum);
                stk.push(str_sum);
            }
            else
            {
                num.push_back(s[i]);
            }
            
        }

        if(num!="")
        stk.push(num);

        int res=0;
        while(!stk.empty())
        {   int top = stoi(stk.top());
            stk.pop();
            res+=top;
        }
        return res;
    }
};