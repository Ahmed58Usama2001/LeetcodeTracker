class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<vector<int>> graph(edges.size()+1);
        vector<bool>visited(edges.size()+1);

        for(auto& edge: edges)
        {
            fill(visited.begin() , visited.end() , false);
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
            if(dfs(graph , visited , edge[0]))
            return edge;
        }
        return {};
    }

    bool dfs(vector<vector<int>>& graph,  vector<bool>& visited , int cur , int par=-1)
    {
        if(visited[cur])return true;
        visited[cur]=true;
        for(auto child: graph[cur])
        {
            if(child != par && dfs(graph , visited , child , cur))
            return true;
        }
        return false;
    }
};