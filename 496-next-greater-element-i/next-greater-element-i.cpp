class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int>m;

        for(int num:nums2)
        {
            while(!s.empty()&&s.top()<num)
            {
                m[s.top()]=num;
                s.pop();
            }

            s.push(num);
        }

        vector<int>res;

        for(int num:nums1)
            res.push_back(m.count(num)?m[num]:-1);

            return res;

    }
};