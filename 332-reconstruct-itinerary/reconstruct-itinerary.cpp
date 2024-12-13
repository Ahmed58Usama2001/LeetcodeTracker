class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        vector<string> result;
        unordered_map<string, vector<string>> graph;

        for (const auto& ticket : tickets) {
            graph[ticket[0]].push_back(ticket[1]);
        }

        for (auto& [key, destinations] : graph) {
            sort(destinations.begin(), destinations.end());
        }

        dfs(graph, result, "JFK");

        reverse(result.begin(), result.end());
        return result;
    }
    
    void dfs(unordered_map<string, vector<string>>& graph, vector<string>& result, const string& city) {
        auto& neighbors = graph[city]; 
        while (!neighbors.empty()) {
            string nextCity = neighbors.front();
            neighbors.erase(neighbors.begin());
            dfs(graph, result, nextCity);
        }
        result.push_back(city); 
    }
};
