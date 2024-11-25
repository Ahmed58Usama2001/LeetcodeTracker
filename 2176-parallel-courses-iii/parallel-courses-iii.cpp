class Solution {
public:

    void add_directed_graph(vector<vector<int>>& graph , int from , int to){
        graph[from].push_back(to);
    }

    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<vector<int>> graph(n);
        vector<int>completion_time(n);
        vector<int>indegree(n);

        for(auto x:relations)
        add_directed_graph(graph,x[0]-1,x[1]-1);


        for(int i=0;i<n;i++)
        for(int j:graph[i])
        indegree[j]++;

        queue<int>ready;

        for(int i=0;i<n;i++)
        if(!indegree[i])
        ready.push(i);

        while(!ready.empty())
        {
            int i = ready.front();
            ready.pop();
            completion_time[i]+=time[i];

            for(int j: graph[i])
            {
                if(--indegree[j]==0)
                ready.push(j);

                completion_time[j] = max(completion_time[j], completion_time[i]);
            }
        }

        return *max_element(completion_time.begin(), completion_time.end());
    }
};