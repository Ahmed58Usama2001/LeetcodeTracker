class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>res(temperatures.size(),0);
        stack<int>pos;

        for(int i=temperatures.size()-1;i>=0;i--)
        {
            while(!pos.empty() && temperatures[pos.top()]<=temperatures[i])
            pos.pop();

            if(!pos.empty())
            res[i]=pos.top()-i;

            pos.push(i);
        }

        return res;
    }
};