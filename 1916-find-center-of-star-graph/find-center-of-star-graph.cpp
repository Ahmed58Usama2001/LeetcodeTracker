class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int>count(edges.size()+2);

        for(int i=0;i<edges.size();i++)
        {
            count[edges[i][0]]++;
            count[edges[i][1]]++;
        }

        for(int i=0;i<count.size();i++)
         if(count[i]==edges.size())
         return i;
       

        return -1;
    }
};