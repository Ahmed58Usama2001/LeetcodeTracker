class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums1ptr=m;
        int nums2ptr=0;

        while(nums1ptr<nums1.size())
        {
            nums1[nums1ptr]=nums2[nums2ptr];
            nums1ptr++;
            nums2ptr++;
        }

        sort(nums1.begin(),nums1.end());
    }
};