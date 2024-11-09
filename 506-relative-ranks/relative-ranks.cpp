class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
       map<int,int,greater<int>> mp;

       for(int i=0;i<score.size() ; i++)
       mp[score[i]]=i;

       vector<string>res(score.size());

        int order=1;
        string str;
        for (const auto& [key, value] : mp) 
        {   
            if(order>3)
            {
             str = to_string(order);
             res[value]=str;
            }
            else if(order==1)
            res[value] = "Gold Medal";
            else if(order==2)
            res[value] = "Silver Medal";
            else
            res[value] = "Bronze Medal";


            order++;
        }

        return res;
    }


};