class Solution {
public:

    void dfs(vector<vector<int>>& graph ,vector<bool>& visited ,int start)
    {
        visited[start]=true;

        for(int neighbor:graph[start])
        if(!visited[neighbor])
        dfs(graph,visited,neighbor);
    }


    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<vector<int>> graph(n);
        vector<bool>visited(n);

        for(int i=0;i<n;i++)
            for(int j=0;j<rooms[i].size();j++)
                graph[i].push_back(rooms[i][j]);

            dfs(graph,visited,0);
      
        for(int i=0;i<n;i++)
        if(!visited[i])
        return false;
        
        return true;
    }
};