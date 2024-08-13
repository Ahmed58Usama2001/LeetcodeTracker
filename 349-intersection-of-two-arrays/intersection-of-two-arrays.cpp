class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,bool> hash;
        unordered_set<int> myset;

        vector<int> output;

        for(int i=0;i<nums1.size();i++)
        hash[nums1[i]]=true;

        for(int i=0;i<nums2.size();i++)
        if(hash[nums2[i]])
        myset.insert(nums2[i]);

        for(int num:myset)
        output.push_back(num);


        return output;
    }
};