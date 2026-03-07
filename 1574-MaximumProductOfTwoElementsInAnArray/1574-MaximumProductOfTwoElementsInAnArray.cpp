// Last updated: 3/7/2026, 4:12:09 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        int n=nums.size();

        return (nums[n-1]-1) * (nums[n-2]-1);
    }
};