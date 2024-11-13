class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> res(n);
        vector<pair<int, int>> starts;  
        vector<pair<int, int>> ends;  

        for (int i = 0; i < n; i++) {
            starts.push_back({intervals[i][0], i});
            ends.push_back({intervals[i][1], i});
        }

        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());

        for (int i = 0; i < n; i++) {
            
            auto it = lower_bound(starts.begin(), starts.end(), make_pair(ends[i].first, 0));
            
            if (it != starts.end()) 
                res[ends[i].second] = it->second; 
            else 
                res[ends[i].second] = -1; 
            
        }

        return res;
    }
};
