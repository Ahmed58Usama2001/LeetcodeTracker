class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0 , right = letters.size(),mid,ans;
        while(left<right)
        {
            mid =left+ (right-left)/2;

            if(letters[mid]>target)
            {
            right=mid;
            ans=mid;
            }
            else
            left=mid+1;
        }

        return letters[ans];
    }
};