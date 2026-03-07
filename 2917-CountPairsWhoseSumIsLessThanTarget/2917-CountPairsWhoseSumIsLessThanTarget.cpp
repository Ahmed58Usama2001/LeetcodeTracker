// Last updated: 3/7/2026, 4:11:29 PM
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int left = 0 , right = nums.size()-1,ans=0;
        sort(nums.begin() , nums.end());

        while(left<right)
        {
            if(nums[left]+nums[right]<target)
            {
                ans+=right - left;
                left++;
            }
            else
            right--;
        }

        return ans;
    }
};