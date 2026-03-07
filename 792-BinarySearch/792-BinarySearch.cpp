// Last updated: 3/7/2026, 4:15:49 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int first=0,last=nums.size(),mid;

if(nums.size()==1)
{
    if(nums[0]==target)
    return 0;
    else
    return -1;
}


        while(first<=last)
        {mid=(first+last)/2;

            if(nums[mid]==target)
            return mid;

            else if(nums[mid]>target)
            last=mid-1;

            else
            first=mid+1;
        }

        return -1;

    }
};