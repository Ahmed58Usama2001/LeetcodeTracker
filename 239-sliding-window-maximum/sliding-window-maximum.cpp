class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       deque<int>dq;
       vector<int>output;

       for(int i=0;i<nums.size();i++)
       {
        if(!dq.empty()&&i-k>=dq.front())
            dq.pop_front();

        while(!dq.empty() && nums[i]>nums[dq.back()])
            dq.pop_back();

        dq.push_back(i);

        if(i+1>=k)
            output.push_back(nums[dq.front()]);
       }

       return output;
    }
};