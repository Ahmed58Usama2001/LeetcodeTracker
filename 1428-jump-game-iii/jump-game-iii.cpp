class Solution {
public:

bool is_reached=false;

    bool canReach(vector<int>& arr, int start) {
        vector<int>visited(arr.size());

        dfs(arr,start,visited);
        
        return is_reached;
    }

    void dfs(vector<int>& arr, int node,vector<int>& visited)
    {
        visited[node]=1;

        if(arr[node]==0)
        {
            is_reached=true;
            return;
        }

       
            if(isvalid(arr.size(),node+arr[node]) && !visited[node+arr[node]])
            dfs(arr,node+arr[node],visited);

            if(isvalid(arr.size(),node-arr[node]) && !visited[node-arr[node]])
            dfs(arr,node-arr[node],visited);
        
    }

    bool isvalid(int n, int node)
    {
        return node>=0 && node<n;
    }
};