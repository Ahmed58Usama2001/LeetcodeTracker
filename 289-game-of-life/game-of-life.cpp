class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int dx[]={1, 1, 0, -1, -1, -1, 0, 1};
        int dy[]={0, 1, 1, 1, 0, -1, -1, -1};
        int rows=board.size(),cols=board[0].size(),live_neighbours=0,new_dx,new_dy;
        vector<vector<int>>temp(rows,vector<int>(cols,0));

        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                live_neighbours=0;
                for(int dir=0;dir<8;dir++)
                {   new_dx=i+dx[dir];
                    new_dy=j+dy[dir];
                    if(new_dx>=0 && new_dx<rows && new_dy>=0 && new_dy<cols)
                    live_neighbours+=board[new_dx][new_dy];
                }

                if(board[i][j] && (live_neighbours==2 || live_neighbours==3))
                temp[i][j]=1;
                else if (!board[i][j] && live_neighbours==3)
                temp[i][j]=1;
            }
        }

        for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
        board[i][j]=temp[i][j];
    }
};