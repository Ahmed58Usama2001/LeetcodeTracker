class Solution {
public:
    int minimumOperations(vector<int>& nums, int start, int goal) {
        vector<bool>visited(1001);
        queue<int>q;
        q.push(start);
        visited[start]=1;

        for(int sz=1,level=0 ; !q.empty() ; sz=q.size(),level++)
        {
            while(sz--)
            {
                int x=q.front();
                q.pop();

                for(int i=0;i<nums.size();i++)
                {
                    if(bfs(nums,x+nums[i],goal,visited,q)
                    ||bfs(nums,x-nums[i],goal,visited,q)
                    ||bfs(nums,x^nums[i],goal,visited,q)
                    )
                        return level+1;
                }
            }
        }
        return -1;
    }

    bool bfs(vector<int>& nums, int x, int goal,vector<bool>& visited ,queue<int>& q)
    {
        if(x==goal)
        return true;

        if(x>=0 && x<=1000 && !visited[x])
        {
            visited[x]=true;
            q.push(x);
        }
        return false;
    }
};