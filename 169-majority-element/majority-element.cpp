class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();

        unordered_map<int,int>hash;

        for(int i=0;i<n;i++)
        hash[nums[i]]++;

        for (const auto& pair : hash) 
        if(pair.second>n/2)
        return pair.first;

    return 0;
    }
    
};