class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        int counter=0;
        for(int i=0;i<mat.size();i++)
        {   counter=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j])
                counter++;
                else
                break;
            }
            pq.push({counter , i});
        }

        vector<int>res;
        while(k--)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};