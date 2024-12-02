class Solution {
public:

    long long square(long long root){
        return root*root;
    }

    bool isPerfectSquare(int num) {
        long long start=1,end=num,mid;

        while(start<=end)
        {
            mid = start +(end-start)/2;

            if(square(mid)==num)
            return true;
            else if(square(mid)>num)
            end=mid-1;
            else
            start=mid+1;
        }
        return false;
    }
};