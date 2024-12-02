class Solution {
public:

  

    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {

        vector<bool>has_in(n);
        vector<int>res;

        for(int i =0; i<edges.size();i++ )
        has_in[edges[i][1]]=true;

        for(int i=0;i<n;i++)
        if(!has_in[i])
        res.push_back(i);

       
        return res;
    }
};