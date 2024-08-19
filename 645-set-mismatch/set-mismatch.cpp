class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>output(2);
        int n=nums.size();

        vector<int>count(n+1);

        for(int i=0;i<n;i++)
        count[nums[i]]++;

        for(int i=1;i<count.size();i++)
        {
            if(count[i]==2)
            output[0]=i;
            else if(count[i]==0)
            output[1]=i;
        }

    
        return output;
    }
};