class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int target=nums.size()/3;
        unordered_map<int,int>freq;
        vector<int>output;

        for(int i=0;i<nums.size();i++)
        freq[nums[i]]++;

        for(auto x:freq)
        {
            if(x.second>target)
            output.push_back(x.first);
        }

        return output;
    }
};