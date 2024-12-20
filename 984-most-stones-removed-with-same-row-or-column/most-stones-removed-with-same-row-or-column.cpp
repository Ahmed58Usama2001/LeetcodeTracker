class Solution {
public:
    int dfs(vector<vector<int>>& stones , vector<bool>& visited , int index , int n)
    {   visited[index]=true;
        int result=0;
        for(int i=0;i<n;i++)
        {
            if(!visited[i] && (stones[i][0]==stones[index][0] || stones[i][1]==stones[index][1]))
            result+=(dfs(stones , visited,i,n)+1);
        }

        return result;
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size(),result=0;
        vector<bool>visited(n);

        for(int i =0;i<n;i++)
        {
            if(!visited[i])
            result+=dfs(stones , visited , i,n);
        }
        return result;
    }
};