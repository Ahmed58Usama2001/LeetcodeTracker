class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>have;
        unordered_map<char,int>need;

        for(int i=0;i<ransomNote.length();i++)
        need[ransomNote[i]]++;

        for(int i=0;i<magazine.length();i++)
        have[magazine[i]]++;

        for(auto c:need)
            if(have[c.first]<c.second)
            return false;

        return true;
        
    }
};