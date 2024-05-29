class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size(); 

        if(n==1)
        return;

        if(k>n)
        k=k%n;

        unordered_map<int,int> hash;

        for(int i=0;i<n;i++)
            hash[i]=nums[i];
        

        for(int i=0;i<n-k;i++)
        nums[i+k]=hash[i];

        for(int i=0;i<k;i++)
        nums[i]=hash[n-k+i];
    }
};