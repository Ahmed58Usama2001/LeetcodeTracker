class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>count(n+1,0);
        vector<int>output;

        for(int i=0;i<n;i++)
        count[nums[i]]++;

        for(int i=0;i<n+1;i++)
        if(count[i]==2)
        output.push_back(i);

        return output;
    }
};