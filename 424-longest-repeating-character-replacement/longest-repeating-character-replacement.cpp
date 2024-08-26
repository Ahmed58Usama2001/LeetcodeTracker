class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> counts(26, 0);
        int start = 0,maxCharCount = 0,result = 0;
        for(int end = 0; end < s.length(); end++){
            counts[s[end]-'A']++;
            if(maxCharCount < counts[s[end]-'A'])
                maxCharCount=max(maxCharCount,counts[s[end]-'A']);
            
            while(end-start-maxCharCount+1 > k){
                counts[s[start]-'A']--;
                start++;
                for(int i = 0; i < 26; i++)
                   maxCharCount=max(maxCharCount,counts[i]);
                
            }
            result = max(result, end-start+1);
        }
        return result;
    }
};