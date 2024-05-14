class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string, vector<string>> hash;
        
        for(auto x: strs){
            string word = x;
            sort(word.begin(), word.end());
            hash[word].push_back(x);
        }
        
        vector<vector<string>> result;
        for(auto x: hash){
            result.push_back(x.second);
        }
        return result;


    }
};