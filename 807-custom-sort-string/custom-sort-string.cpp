class Solution {
public:
    string customSortString(string order, string s) {
        queue<char>place;
        vector<int>freq(26,0);

        for(int i=0;i<order.length();i++)
            place.push(order[i]);
        
        for(int i=0;i<s.length();i++)
            freq[s[i]-'a']++;

        string res="";

        while(!place.empty())
        {
            char c=place.front();
            place.pop();

            while(freq[c-'a'])
            {
                res.push_back(c);
                freq[c-'a']--;
            }
        }

           for(int i=0;i<26;i++)
           {
            if(freq[i]>0)
            {
                while(freq[i])
                {
                    res.push_back(i+'a');
                    freq[i]--;
                }
            }
           }

        return res;
    }
};