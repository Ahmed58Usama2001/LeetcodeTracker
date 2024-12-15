class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {

        for(int i=0; i<nums1.size() ; i++)
        {
            int start = 0, end= nums2.size()-1,mid,target = nums1[i];

            while(start<=end){
                mid = start + (end-start)/2;
                if(nums2[mid]==target)
                return target;
                else if(nums2[mid]>target)
                end = mid-1;
                else
                start = mid+1;
            }
        }

        return -1;
    }
};