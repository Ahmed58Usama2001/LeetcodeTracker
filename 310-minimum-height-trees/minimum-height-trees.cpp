class Solution {
public:
    void add_undirected_edge( vector<vector<int>>& graph,int from , int to)
    {
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    vector<int> tree_centroids(const vector<vector<int>>& graph)
    {
        int sz = graph.size();

        if(sz==1)
        return {0};

        vector<int>indegree(sz,0);

        for(int i=0;i<sz;i++)
        for(auto & j:graph[i])
        indegree[j]++;

        queue<int>ready;
        for(int i=0;i<sz;i++)
        if(indegree[i]==1)
        ready.push(i);

        while(sz>2)
        {
            int level_sz=ready.size();
            sz-=level_sz;
            while(level_sz--)
            {
                int i = ready.front();
                ready.pop();

                for(int j : graph[i])
                {
                    if(--indegree[j]==1)
                    ready.push(j);
                }
            }
        }

        vector<int>res;
        while(!ready.empty())
        {
            res.push_back(ready.front());
            ready.pop();
        }

        return res;
    }

    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<vector<int>>graph(n);

        for (auto &edge : edges)
	    add_undirected_edge(graph, edge[0], edge[1]);

        return tree_centroids(graph);
    }
};