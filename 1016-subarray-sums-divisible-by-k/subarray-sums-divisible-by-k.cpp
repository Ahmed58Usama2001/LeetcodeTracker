class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int prefixMod=0,res=0;
        vector<int> modGroups(k);
        modGroups[0]=1;

        for(int i=0;i<nums.size();i++)
        {
            prefixMod=(prefixMod + nums[i] % k + k) % k;
            res+=modGroups[prefixMod];
            modGroups[prefixMod]++;
        }

        return res;
    }
};