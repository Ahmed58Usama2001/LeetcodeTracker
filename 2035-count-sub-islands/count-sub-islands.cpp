class Solution {
public:
    const int dr[4] = {-1, 0, 1, 0}; 
    const int dc[4] = {0, 1, 0, -1};
    int count=0;
    bool is_sub_island=true;

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        for(int r=0;r<grid2.size();r++)
        {
            for(int c=0;c<grid2[0].size();c++)
            {
                if(grid2[r][c])
                {is_sub_island=true;
                dfs(grid1,grid2,r,c);
                count+=is_sub_island;
                }
            }
        }
        
        return count;
    }

    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2 , int r , int c)
    {
        if(!is_valid(r,c,grid1.size(),grid1[0].size()) || !grid2[r][c])
        return;

        if(grid2[r][c] && !grid1[r][c])
        {
            is_sub_island=false;
            return;
        }

        grid2[r][c]=0;

        for(int i=0;i<4;i++)
        dfs(grid1,grid2,r+dr[i],c+dc[i]);
    }


    bool is_valid(int r,int c , int rows,int cols)
    {
        if(r<0 || r>=rows || c<0 || c>=cols)
        return false;
        return true;
    }
};