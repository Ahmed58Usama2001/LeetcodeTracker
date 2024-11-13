class Solution {
public:

    int BS_First_valid(vector<int>& nums , int start , int val)
    {
        int end = nums.size()-1,mid,position=nums.size();

        while(start<=end)
        {
            mid = start + (end-start)/2;
            if(nums[mid]<val)
            start=mid+1;
            else
            position = mid , end=mid-1;
        }
        return position;
    }

    int triangleNumber(vector<int>& nums) {
        int n = nums.size(),count=0,k;
        sort(nums.begin(),nums.end());
        for (int i=0;i<n-2;i++)
        {
            k=i+2;
            for(int j=i+1 ; j<n-1 && nums[i]!=0; j++)
                count+=BS_First_valid(nums , k , nums[i]+nums[j])-j-1;
            
        }

        return count;
    }
};