class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
      int i=0,ctr=0;
        while(i<n-ctr)
        {cout<<i;
            if(nums[i]==0)
            {
                for(int j=i;j<n-1;j++)
                {
                    iter_swap(nums.begin() + j, nums.begin() + j+1);
                }
                ctr++;
            }
            else
            i++;
            
        }

    }
};