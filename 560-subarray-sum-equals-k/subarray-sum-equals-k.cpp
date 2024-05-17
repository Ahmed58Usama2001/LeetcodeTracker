class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int result=0,sum=0;

        unordered_map<int,int>hash;

        hash[sum]=1;

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int find=sum-k;

            if(hash.find(find)!=hash.end())
            result+=hash[find];

            hash[sum]++;

        }


      return result;
    }
};