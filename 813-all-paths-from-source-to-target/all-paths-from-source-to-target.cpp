class Solution {
public:

    void dfs(vector<vector<int>>& graph,vector<vector<int>>& result ,vector<int>&res
    ,int node,int dest )
    {
        res.push_back(node);
        if(node==dest)
        {
            result.push_back(res);
            res.pop_back();
            return;
        }
        for(auto neighbor : graph[node])
        {
            dfs(graph ,result ,res ,  neighbor,dest);
        }
        res.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int>res;
        dfs(graph,result ,res,0 , graph.size()-1);

        return result;
    }
};