class Solution {
public:
    const vector<string> keyboard = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };

    vector<string> letterCombinations(string digits) {
        vector<string> output;
        if(!digits.length())
        return output;

        output.push_back("");

        for(auto digit:digits)
        {
            vector<string>temp;
            for(auto c:keyboard[digit-'0'])
                for(auto s:output)
                    temp.push_back(s+c);
            output.swap(temp);
        }

        return output;
    }
};