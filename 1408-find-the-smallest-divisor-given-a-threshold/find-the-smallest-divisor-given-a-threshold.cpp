class Solution {
public:

    bool possible(vector<int>& nums,int num ,int threshold)
    {
        long long sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=ceil((double)nums[i]/(double)num);
        return sum<=threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1,mid,ans=1, end = *max_element(nums.begin(),nums.end());

        while(start<=end)
        {   mid = start + (end-start)/2;
            if(possible(nums , mid , threshold))
            ans = mid , end=mid-1;
            else
            start=mid+1;
        }
        return ans;
    }
};