class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int n = arr.size();
        
        for(int i=0;i<n;i++)
        {
            int start=0,end=n-1,mid;
            while(start<=end)
            {
                mid=start+(end-start)/2;

                if(arr[i]*2==arr[mid] && i!=mid)
                return true;

                else if(arr[mid]>arr[i]*2)
                end=mid-1;

                else
                start=mid+1;
            }
            
        }

        return false;
    }
};