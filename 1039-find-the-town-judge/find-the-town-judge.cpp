class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<bool>trusting(n+1,false);
        vector<int>untrusting;

        for(int i=0;i<trust.size();i++)
            trusting[trust[i][0]]=true;

        for(int i=1;i<=n;i++)
        if(!trusting[i])
        untrusting.push_back(i);
        
        int num_of_trusting;

        for(int i=0;i<untrusting.size();i++)
        {   num_of_trusting=0;
            for(int j=0;j<trust.size();j++)
            {
                if(trust[j][1]==untrusting[i])
                num_of_trusting++;
            }
             if(num_of_trusting==n-1)
             return untrusting[i];
        }

        return -1;
        
    }
};