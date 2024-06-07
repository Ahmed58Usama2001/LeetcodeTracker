class Solution {
public:

vector<string> splitStringBySpace(const string& str) {
    vector<string> splitedSentence;
    istringstream iss(str);
    string word;
    while (iss >> word) {
        splitedSentence.push_back(word);
    }
    return splitedSentence;
}

    string replaceWords(vector<string>& dictionary, string sentence) {
        vector<string> splitedSentence=splitStringBySpace(sentence);
        unordered_map<string,bool>mp;

        for(auto x: dictionary)
        mp[x]=true;

        string word;
        for(int j=0;j<splitedSentence.size();j++ )
        {   word="";
            for(int i=0;i<splitedSentence[j].length();i++)
            {
                word+=splitedSentence[j][i];
                if(mp.count(word) > 0)
                {
                    splitedSentence[j]=word;
                    break;
                }
            }
        }

        ostringstream oss;
        for (size_t i = 0; i < splitedSentence.size(); ++i) {
        if (i != 0) {
            oss << " ";
        }
        oss << splitedSentence[i];
    }
    return oss.str();
    }
};