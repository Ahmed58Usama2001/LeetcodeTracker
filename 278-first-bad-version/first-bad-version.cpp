// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start =0 , end=n ,version;

        while(end-start>1)
        {
            version = start +(end-start)/2;

            if(isBadVersion(version))
            end=version;
            else
            start =version;

        }

        return end;
    }
};