// Last updated: 3/7/2026, 4:11:36 PM
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin() , nums.end());

        vector<int>res;
        
        for(int i=1;i<nums.size();i++)
        nums[i]+=nums[i-1];

        for(int& query :  queries)
        res.push_back(upper_bound(nums.begin() , nums.end() , query)-nums.begin());

        return res;
    }
};