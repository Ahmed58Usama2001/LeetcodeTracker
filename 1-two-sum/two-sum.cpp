class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indecies;

        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(target-nums[i]==nums[j] && i!=j)
                {
                    indecies.push_back(i);
                    indecies.push_back(j);
                    return indecies;
                }
            }
        }
        return indecies;
    }
};