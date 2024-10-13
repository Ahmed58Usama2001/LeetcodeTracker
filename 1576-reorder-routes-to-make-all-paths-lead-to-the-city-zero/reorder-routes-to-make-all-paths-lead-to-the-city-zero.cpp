class Solution {
public:
int changes=0;
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int, int>>> graph(n); 
        vector<bool> visited(n);

        for (auto& conn : connections) {
            graph[conn[0]].emplace_back(conn[1], 1); 
            graph[conn[1]].emplace_back(conn[0], 0); 
        }
  
        dfs(graph, visited);
        return changes;
    }

    void dfs(vector<vector<pair<int, int>>>& graph, vector<bool>& visited, int node=0) {
        visited[node] = 1;
        for (auto& [neighbor, direction] : graph[node]) {
            if (!visited[neighbor]) {
                
                changes += direction;
                dfs(graph, visited, neighbor);
            }
        }
    }
};
