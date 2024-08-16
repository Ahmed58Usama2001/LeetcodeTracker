class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length()<t.length())
            return "";
        
        unordered_map<char,int> countT;
        for(int i=0;i<t.length();i++)
            countT[t[i]]++;
        
        int need = countT.size();

        unordered_map <char,int> window;
        int have = 0,minLen = INT_MAX,min_pos = -1 ;

        int l = 0,r=0;

        char c;
        string ans="";

        while(r < s.length()){
            c = s[r];
            window[c]++;
            
            if(countT.find(c)!=countT.end()&&window[c]==countT[c])
                have ++;
            
            while(have == need){
                if(r-l+1 < minLen){
                    minLen = r-l+1;
                    min_pos = l;
                }

                window[s[l]]--;
                if (countT.find(s[l]) != countT.end() && window[s[l]] < countT[s[l]])
                    have--;

                l++;
            }
            r++;
        }
        if(minLen<INT_MAX)
            ans = s.substr(min_pos,minLen);
        return ans;
    }
};