class Solution {
public:

    const int dr[4] = {-1, 0, 1, 0}; 
    const int dc[4] = {0, 1, 0, -1};
    bool is_cycle;

    bool containsCycle(vector<vector<char>>& grid) {
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size()));

        for(int r=0;r<grid.size();r++)
        {
            for(int c=0;c<grid[0].size();c++)
            {
                if(!visited[r][c])
                {
                    is_cycle=false;
                    dfs(grid,r,c,grid[r][c], visited);
                    if(is_cycle)
                    return true;
                }
            }
        }

        return false;
    }

    void dfs(vector<vector<char>>& grid , int r, int c ,char old,vector<vector<bool>>&visited,
    int pr_r=-1,int pr_c=-1)
    {   
       if (!isvalid(r, c, grid) || grid[r][c] != old || is_cycle)
	        return;

        if(visited[r][c])
        {
            is_cycle=true;
            return;
        }

        visited[r][c]=1;

        for(int i=0;i<4;i++)
        {
            int nr=r+dr[i] , nc=c+dc[i];

            if(nr==pr_r && nc==pr_c)
            continue;

            dfs(grid,nr,nc,old,visited,r,c);
        }
    }

    bool isvalid(int r, int c, vector<vector<char>> &grid) {
	if (r < 0 || r >= (int) grid.size() || c < 0 || c >= (int) grid[0].size())
		return false;

	return true;
}
};