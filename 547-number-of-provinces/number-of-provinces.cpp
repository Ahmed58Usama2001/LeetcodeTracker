class Solution {
public:

   void dfs(vector<vector<int>>& graph , vector<bool>& visited, int node)
    {
        visited[node]=true;
        for(int neighbor: graph[node])
        {
            if(!visited[neighbor])
            dfs(graph, visited , neighbor);
        }
        
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n= isConnected.size(),count=0;
        vector<vector<int>> adj_list(n);
        vector<bool> visited(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {   
                if(i!=j && isConnected[i][j] == 1)
                adj_list[i].push_back(j);
            }
        }

        for(int i=0 ; i<n;i++)
        {
            if(!visited[i])
            {
                count++;
                dfs(adj_list , visited , i);
            }
        }

        return count;
    }
};