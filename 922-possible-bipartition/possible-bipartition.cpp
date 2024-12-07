class Solution {
public:
    bool has_conflict = false;
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>>graph(n+1);
        vector<int>colors(n+1);
        for(int i=0;i<dislikes.size();i++)
        {
            graph[dislikes[i][0]].push_back(dislikes[i][1]);
            graph[dislikes[i][1]].push_back(dislikes[i][0]);
        }

        for(int i=0;i<n+1;i++)
        {
            if(!colors[i])
            {
                dfs(graph,colors,i);
                if(has_conflict)
                return false;
            }
        }
        return true;   
    }

    void dfs(vector<vector<int>>& graph, vector<int>& colors, int node, int color=1 )
    {
        if(!colors[node])
        colors[node]=color;
        else
        {
            if(colors[node]!=color)
                has_conflict=true;
            return;    
        }

        for(int neighbor:graph[node])
        dfs(graph , colors,neighbor , 3-color);
    }
};