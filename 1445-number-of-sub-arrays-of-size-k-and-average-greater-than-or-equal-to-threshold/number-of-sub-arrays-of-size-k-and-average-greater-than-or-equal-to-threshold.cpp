class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        double avg;
        int ans=0,left=0,right=0,sum=0;

        while(right<k-1)
        {
            sum+=arr[right];
            right++;
        }


        while(right<arr.size())
        {   
            sum+=arr[right];
            avg=sum/k;
            if(avg>=threshold)
            ans++;

            sum-=arr[left];
            left++;
            right++;

        }

        return ans;
    }
};