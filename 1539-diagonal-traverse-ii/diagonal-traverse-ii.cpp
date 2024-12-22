class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int,vector<int>>mp;

        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                int sum = i+j;
                mp[sum].push_back(nums[i][j]);
            }
        }

        vector<int>res;
        for(int i = 0;i<mp.size();i++)
            for(auto it = mp[i].rbegin() ; it!=mp[i].rend() ; it++)
            res.push_back(*it);
        
        return res;

    }
};