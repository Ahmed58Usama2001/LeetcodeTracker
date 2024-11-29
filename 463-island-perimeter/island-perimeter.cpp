class Solution {
public:

    int dr[4] = {-1,0,0,1};
    int dc[4] = {0,-1,1,0};

    int count_per(vector<vector<int>>& grid,int r,int c)
    {   int count=0,nr,nc;
        for(int d=0;d<4;d++)
        {
            nr = r+dr[d];
            nc = c+dc[d];

            if(nr<0 || nr>=grid.size() || nc<0 || nc>=grid[0].size() || grid[nr][nc]==0)
            count++;

        }
        cout<<endl;

        return count;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int count =0,r= grid.size(), c= grid[0].size();

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j])
                {
                    count+=count_per(grid,i,j);
                }
            }
        }

        return count;
    }
};