class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>count1(1001);
        vector<int>count2(1001);
        vector<int>output;

        for(int i=0;i<nums1.size();i++)
        count1[nums1[i]]++;

        for(int i=0;i<nums2.size();i++)
        count2[nums2[i]]++;

        int k;
        for(int i=0;i<1001;i++)
        {   k=0;

            if(count1[i] && count2[i])
            k=min(count1[i],count2[i]);

            while(k--)
                output.push_back(i);
        }

        return output;
    }
};