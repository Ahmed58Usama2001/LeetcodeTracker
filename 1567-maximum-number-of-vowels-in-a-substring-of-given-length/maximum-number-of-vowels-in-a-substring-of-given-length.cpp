class Solution {
public:

    bool isVowel(char c)
    {
        if(c=='a' || c=='e' ||c=='i' ||c=='o' ||c=='u')
        return true;

        return false;
    }

    int maxVowels(string s, int k) {
        int start=0,end=k-1,longest=0,current=0;

        for(int i=0;i<=end;i++)
        if(isVowel(s[i]))
        current++;
        longest=current;

        while(end<s.length())
        {
            if(isVowel(s[start]))
            current--;

            start++;
            end++;

            if(isVowel(s[end]))
            current++;

            longest=max(longest,current);
        }

        return longest;
    }
};