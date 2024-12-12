class Solution {
public:
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        long long answer = 0;

        vector<vector<int>> graph(roads.size()+1);

        for(vector<int>&road : roads)
        {
            graph[road[0]].push_back(road[1]);
            graph[road[1]].push_back(road[0]);
        }

        dfs(graph , 0,-1 , seats,answer);

        return answer;
    }

    int dfs(vector<vector<int>>& graph , int node , int prev , int seats , long long & answer){
        int people = 1;

        for(int neighbor:graph[node])
        {
            if(neighbor==prev)
            continue;

            people+=dfs(graph , neighbor , node , seats,answer);
        }

        if(node!=0)
        answer+=(people + seats - 1) / seats;

        return people;
    }
};