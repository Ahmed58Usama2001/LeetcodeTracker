class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<vector<int>> res;
        int x,y,distSquared,idx;
         for (int i = 0; i < points.size(); ++i) {
             x = points[i][0];
             y = points[i][1];
             distSquared = x * x + y * y; 
            pq.push({distSquared, i});
        }

        while(k--)
        {   
            idx = pq.top().second; 
            pq.pop();
            res.push_back(points[idx]);

        }

        return res;
    }
};