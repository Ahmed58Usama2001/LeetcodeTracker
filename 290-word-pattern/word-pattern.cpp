class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> tokens;
        istringstream iss(s);
        string token;

        while (iss >> token) {
        tokens.push_back(token);
        cout<<token<<endl;
        }

        if(pattern.length()!=tokens.size())
        return false;

        unordered_map<char,string> map1;
        unordered_map<string,char> map2;

        for(int i=0;i<tokens.size();i++)
        {
            if(map1.find(pattern[i])==map1.end())
            map1[pattern[i]]=tokens[i];
            else
            {
                if(map1[pattern[i]] != tokens[i])
                return false;
            }

            if(map2.find(tokens[i])==map2.end())
            map2[tokens[i]]=pattern[i];
            else
            {
                if(map2[tokens[i]] != pattern[i])
                return false;
            }
        }

        return true;
    }
};