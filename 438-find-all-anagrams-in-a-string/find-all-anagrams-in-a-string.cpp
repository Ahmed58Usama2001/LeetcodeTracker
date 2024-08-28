class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>pCount(26,0);
        vector<int>output;

        for(int i=0;i<p.length();i++)
        pCount[p[i]-'a']++;

        vector<int>tempCount(pCount);

        int right=0,have=0,need=p.length();

        for(int left=0;left<s.length();left++)
        {   
            right=left;
            while(right<s.length() && tempCount[s[right]-'a'] && right-left+1<=p.length())
            {
                tempCount[s[right]-'a']--;
                have++;
                right++;
            }

            if(need==have)
                output.push_back(left);
            
            have=0;
            tempCount=pCount;
        }

        return output;
    }
};