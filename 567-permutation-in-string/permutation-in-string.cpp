class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length(),start=0;

        if(n>s2.length())
        return false;

        sort(s1.begin(), s1.end());

        string substring;

        while(start<s2.length()-n+1)
        {
            substring=s2.substr(start, n);
            sort(substring.begin(), substring.end());

            if(s1==substring)
            return true;
            else
            start++;
        }

        return false;
    }
};