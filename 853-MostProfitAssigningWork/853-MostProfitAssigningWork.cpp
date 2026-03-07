// Last updated: 3/7/2026, 4:15:45 PM
class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
       vector<pair<int,int>>jobs;

       for(int i=0;i<difficulty.size();i++)
       jobs.push_back(make_pair(difficulty[i],profit[i]));

       sort(worker.begin(),worker.end());
       sort(jobs.begin(),jobs.end());

       int job=0,totalmxprofit=0,mxprofitsofar=0;
       for(int i=0;i<worker.size();i++)
       {
           for(;job<jobs.size()&&worker[i]>=jobs[job].first;job++)
           {
               mxprofitsofar=max(mxprofitsofar,jobs[job].second);
           }
           totalmxprofit+=mxprofitsofar;
       }

return totalmxprofit;

    }
};