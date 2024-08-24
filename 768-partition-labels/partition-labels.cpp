class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>lastPos(26,0);
        vector<int>output;


        for(int i=0;i<s.length();i++)
            lastPos[s[i]-'a']=i;
        

        int start=0,end=0;
        for(int i=0;i<s.length();i++)
        {   
            end=max(end,lastPos[s[i]-'a']);

            if(i==end){
                output.push_back(end-start+1);
                start=i+1;
            }

        }

        return output;
    }
};