class Solution {
public:
bool is_different_color=false;

    void dfs(vector<vector<int>>& graph,int node ,vector<int>& colors , int current_color=1)
    {
        if(colors[node]==0)
        colors[node]=current_color;
        else
        {
            if(colors[node] != current_color)
            
                is_different_color=true;
            return;
        }

        for(int neighbour: graph[node])
        dfs(graph, neighbour,colors,3-current_color);
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int nodes=graph.size();
        vector<int>colors(nodes);

        for(int i=0;i<nodes;i++)
        {
            if(colors[i]==0)
            {
                dfs(graph,i,colors);
                if(is_different_color)
                return false;
            }
        }

        return true;
    }
};