// Last updated: 3/7/2026, 4:12:06 PM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;

        for(int i=0;i<nums.size();i++)
        for(int j=i+1;j<nums.size();j++)
        if(nums[i]==nums[j])
        ans++;

        return ans;
    }
};