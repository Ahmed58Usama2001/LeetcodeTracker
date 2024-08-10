class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k>=num.length())
        return "0";

        if(k==0)
        return num;

        string res="";
        stack<char>s;

        s.push(num[0]);

        for(int i=1;i<num.length();i++)
        {
            while(k && !s.empty() && num[i]<s.top())
            {
                s.pop();
                k--;
            }

            s.push(num[i]);

            if(s.size()==1 && s.top()=='0')
            s.pop();
        }

        while( k && !s.empty())
        {
            s.pop();
            k--;
        }

        while(!s.empty())
        {
            res.push_back(s.top());
            s.pop();
        }

        reverse(res.begin(),res.end());

        return res.length()?res:"0";
    }
};