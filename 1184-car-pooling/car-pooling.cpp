class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int,int>>triggers;
        int filled =0;
        for(int i=0;i<trips.size();i++)
        {
            triggers.push_back({trips[i][1] , trips[i][0]});
            triggers.push_back({trips[i][2] , -trips[i][0]});
        }

        sort(triggers.begin() , triggers.end());

        for(int i=0;i<triggers.size();i++)
        {
            filled+=triggers[i].second;
            if(filled>capacity)
            return false;
        }

        return true;
    }
};