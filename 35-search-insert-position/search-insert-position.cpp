class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0 , end = nums.size()-1,mid;

        while(start<end)
        {
            mid = start + (end-start)/2;

            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>target)
            end=mid;
            else
            start = mid+1;
        }

        return nums[end]<target?end+1:end;
  
    }
};