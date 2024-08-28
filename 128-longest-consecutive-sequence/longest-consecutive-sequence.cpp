class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size())
        return 0;
        
        int ans=1;
        vector<int>results;
        sort(nums.begin(),nums.end());

        for(int i=1;i<nums.size();i++)
        {   
            if(nums[i]-nums[i-1]==1)
            ans++;
            else if(nums[i]==nums[i-1])
            continue;
            else
            {
                results.push_back(ans);
                ans=1;
            }
        }

        results.push_back(ans);
        auto max_element_it = max_element(results.begin(), results.end());
        return *max_element_it;;
    }
};