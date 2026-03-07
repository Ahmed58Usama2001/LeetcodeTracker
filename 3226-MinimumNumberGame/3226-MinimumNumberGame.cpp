// Last updated: 3/7/2026, 4:11:28 PM
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int x,y;
        vector<int> res;

        for(int i=0;i<nums.size();i+=2)
        {
            x=nums[i];
            y=nums[i+1];
            res.push_back(y);
            res.push_back(x);
        }

        return res;
    }
};