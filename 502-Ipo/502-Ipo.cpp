// Last updated: 3/8/2026, 11:55:13 AM
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
     
        int n=profits.size();
        vector<pair<int,int>>projects(n);

        for(int i=0;i<n;i++)
        projects[i]={capital[i],profits[i]};

        sort(projects.begin(),projects.end());

        int i=0;
        priority_queue<int>maxCapital;
        while(k--)
        {
            while(i<n&&projects[i].first<=w)
            {
                maxCapital.push(projects[i].second);
                i++;
            }

            if(maxCapital.empty())
            break;

            w+=maxCapital.top();
            maxCapital.pop();
        }


        return w;
    }
};