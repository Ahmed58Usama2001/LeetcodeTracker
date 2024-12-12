class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if (connections.size() < n - 1) return -1;
        vector<bool> visited(n);
        vector<vector<int>> graph(n);
        int ans=0;

        for(vector<int>& connection : connections)
        {
            graph[connection[0]].push_back(connection[1]);
            graph[connection[1]].push_back(connection[0]);
        }

        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                ans++;
                dfs(graph , visited, i);
            }
        }

        return ans-1;
    }

    void dfs( vector<vector<int>>& graph, vector<bool>& visited,int node)
    {
        visited[node]=true;

        for(int neighbor:graph[node])
        {
            if(!visited[neighbor])
             dfs(graph , visited, neighbor);
        }
    }
};