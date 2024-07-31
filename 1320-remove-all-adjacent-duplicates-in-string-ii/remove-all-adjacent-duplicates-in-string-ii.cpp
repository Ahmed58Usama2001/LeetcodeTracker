class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>stk;

        for(auto c:s)
        {
            if(!stk.empty() && stk.top().first==c && stk.top().second==k-1)
            stk.pop();
            else if(!stk.empty() && stk.top().first==c)
            {   
                pair<char,int> item=stk.top();
                stk.pop();
                item.second++;
                stk.push(item);
            }
            else
            {
                pair<char,int> item;
                item.first=c;
                item.second=1;
                stk.push(item);
            }
            
        }

        string res="";
        while(!stk.empty())
        {
            int n=stk.top().second;
            char c=stk.top().first;
            for(int i=0;i<n;i++)
            res.push_back(c);
            stk.pop();
        }

        reverse(res.begin(), res.end());

        return res;

    }
};