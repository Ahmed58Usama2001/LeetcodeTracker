class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int prefixMod=0,res=0;
        unordered_map<int,int>modGroups;
        modGroups[0]=1;

        for(int i=0;i<nums.size();i++)
        {
            prefixMod=(prefixMod + nums[i] % k + k) % k;
            if(modGroups.find(prefixMod) != modGroups.end())
            {res+=modGroups[prefixMod];
            modGroups[prefixMod]++;
            }
            else
            modGroups[prefixMod]=1;
        }

        return res;
    }
};