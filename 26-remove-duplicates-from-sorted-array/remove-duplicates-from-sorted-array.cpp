class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j;
        while(i<nums.size())
        {
            j=i+1;
            while(j<nums.size()&&nums[i]==nums[j])
            {
                nums.erase(nums.begin() + j);
            }
            i++;
        }



        return nums.size();
    }
};