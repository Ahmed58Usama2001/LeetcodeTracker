// Last updated: 3/7/2026, 4:16:19 PM
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v=nums;

        sort(nums.begin(),nums.end());
        bool touched=0;
        int minpos=0,maxpos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=v[i])
            {if(!touched)
            {touched=1;
                minpos=i;
            }
            else
            {
                maxpos=i;
            }
            }
        }

if(touched)
return (maxpos-minpos)+1;
else
return 0;


    }
};