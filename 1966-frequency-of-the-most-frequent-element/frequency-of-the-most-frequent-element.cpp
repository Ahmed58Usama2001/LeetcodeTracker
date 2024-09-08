class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    long long left=0,right=0,ans=0, sum=0;

    while(right<nums.size())
    {   sum+=nums[right];
        while( nums[right] * (right-left+1) > sum+k)
            sum-=nums[left++];
        ans=max(ans,right-left+1);
        right++;
    }

    return ans;
    }
};