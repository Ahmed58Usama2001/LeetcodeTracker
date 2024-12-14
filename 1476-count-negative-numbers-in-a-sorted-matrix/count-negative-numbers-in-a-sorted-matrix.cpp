class Solution {
public:

    int countRowNegatives(vector<int> arr){
        int start=0,end=arr.size()-1,mid;
        while(start<=end)
        {   mid= start+ (end-start)/2;
            if(arr[mid]>=0)
            start=mid+1;
            else
            end=mid-1;
        }

        return arr.size()-end-1;
    }

    int countNegatives(vector<vector<int>>& grid) {
        int count =0;

        for(int i=0;i<grid.size();i++)
        count+=countRowNegatives(grid[i]);

        return count;
    }
};