class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int ptr=0;
        string res;

        while(ptr <min(word1.length(), word2.length()))
        {   
            res += word1[ptr];
            res+= word2[ptr];
            ptr++;
        }

        if(word1.length()>word2.length())
        res+= word1.substr(ptr, word1.length());
        else if(word1.length()<word2.length())
        res+= word2.substr(ptr, word2.length());

        return res;
    }
};