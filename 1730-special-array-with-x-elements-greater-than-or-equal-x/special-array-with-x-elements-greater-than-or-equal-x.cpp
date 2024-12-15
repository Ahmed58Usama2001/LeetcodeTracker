class Solution {
public:

    int count(vector<int>& nums , int value)
    {
        int count= 0;
        for(int i=0;i<nums.size();i++)
        if(nums[i]>=value)
        count++;

        return count;
    }

    int specialArray(vector<int>& nums) {
        int start = 0 , end = 1000,mid;

        while(start<=end)
        {
            mid= (start+end)/2;
            if(mid == count(nums , mid))
            return mid;
            else if (mid<count(nums , mid))
            start = mid+1;
            else
            end=mid-1;
        }

        return -1;
        
    }
};