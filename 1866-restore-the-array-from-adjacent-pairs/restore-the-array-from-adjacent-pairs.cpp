class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        int n=adjacentPairs.size()+1;
        unordered_set<int>set;

        unordered_map<int,vector<int>> graph;

        for(int i=0;i<adjacentPairs.size();i++)
        {
            int u = adjacentPairs[i][0];
            int v = adjacentPairs[i][1];

            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        vector<int>res;
        int start;
        for (const auto& pair : graph) {
            if(pair.second.size()==1)
            {
                start=pair.first;
                break;
            }
        }

        dfs(res,graph,set,start);

        return res;
    }

    void dfs(vector<int>& res, unordered_map<int,vector<int>>& graph,unordered_set<int>&visited,int node)
    {   
        if(visited.find(node) != visited.end())
        return;

        visited.insert(node);
        res.push_back(node);

       for (int neighbor : graph[node]) {
            dfs(res, graph, visited, neighbor); 
        }
        
    }
    
};