class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>res(nums.size());

        vector<int>count(101,0);

        for(int i=0;i<nums.size();i++)
            count[nums[i]]++;
        
        for(int i=1;i<count.size();i++)
            count[i]+=count[i-1];

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                res[i] = 0;
            else 
                res[i] = count[nums[i] - 1];
        }

        return res;
    }
};