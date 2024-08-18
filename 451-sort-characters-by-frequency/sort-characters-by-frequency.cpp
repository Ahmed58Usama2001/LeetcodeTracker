class Solution {
public:
    string frequencySort(string s) {
        string output="";
        map<char,int>freq;
        set<pair<int, char>> mySet;
        
        for(int i=0;i<s.length();i++)
        freq[s[i]]++;

        for(auto x:freq)
            mySet.insert({x.second, x.first});
                
        for (auto it = mySet.rbegin(); it != mySet.rend(); ++it) 
        output.append(it->first, it->second);
    
        return output;
    }
};