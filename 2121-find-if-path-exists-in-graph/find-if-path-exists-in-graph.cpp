class Solution {
public:
    void add_undirected_edge(vector<vector<int>>& graph, int from, int to) {
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    bool dfs(vector<vector<int>>& graph, vector<bool>& visited, int start, int end) {
        visited[start] = true;  // Mark the current node as visited
        if (start == end)  // If we reach the destination, return true
            return true;

        for (auto neighbor : graph[start]) {
            if (!visited[neighbor]) {
                if (dfs(graph, visited, neighbor, end)) {
                    return true;  
                }
            }
        }

        return false;  
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);  
        vector<bool> visited(n, false);  

        for (int i = 0; i < edges.size(); i++)
            add_undirected_edge(graph, edges[i][0], edges[i][1]);

        return dfs(graph, visited, source, destination);
    }
};
