class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1,zeros=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            zeros++;
            else
            product*=nums[i];

            if(zeros>1)
            {vector<int> result(nums.size(), 0);
            return result;
             }
        }

        if(zeros==1)
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
           nums[i]=product;
           else
           nums[i]=0;
        }
        else
        for(int i=0;i<nums.size();i++)
        {
           nums[i]=product/nums[i];
        }

        return nums;
    }
};