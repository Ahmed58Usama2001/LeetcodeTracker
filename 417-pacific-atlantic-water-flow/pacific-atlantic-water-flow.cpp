class Solution {
public:
const int dr[4] = {-1,0,1,0};
const int dc[4] = { 0,1,0,-1 };
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int rows=heights.size(),cols=heights[0].size();
        vector<vector<bool>>pacific_reachable(rows,vector<bool>(cols));
        vector<vector<bool>>atlantic_reachable(rows,vector<bool>(cols));

        vector<pair<int,int>>pacific_startings,atlantic_startings;
        
        for(int r=0;r<rows;r++)
        {
            pacific_startings.push_back({r,0});
            atlantic_startings.push_back({r,cols-1});
        }

        for(int c=0;c<cols;c++)
        {
            pacific_startings.push_back({0,c});
            atlantic_startings.push_back({rows-1,c});
        }

        bfs(heights,pacific_reachable,pacific_startings);
        bfs(heights,atlantic_reachable,atlantic_startings);

        vector<vector<int>>res;

        for(int r=0;r<rows;r++)
        {
            for(int c=0;c<cols;c++)
            {
                if(pacific_reachable[r][c] && atlantic_reachable[r][c])
                res.push_back({r,c});
            }
        }

        return res;
    }

    bool is_valid(int r, int c, vector<vector<int>>& heights)
    {
        if (r < 0 || r >= (int) heights.size())
            return false;
        if (c < 0 || c >= (int) heights[0].size())
            return false;
        return true;
    }

    void bfs(vector<vector<int>>& heights , vector<vector<bool>>&visited, vector<pair<int,int>>& startings)
    {
        queue<pair<int,int>>q;

        for(pair<int,int>& start:startings)
        {
            q.push(start);
            visited[start.first][start.second]=true;
        }

        for(int sz=q.size(), level=0 ; !q.empty() ; sz=q.size() , level++)
        {
            while(sz--)
            {
                int r=q.front().first , c=q.front().second;
                q.pop();

                for(int i=0;i<4;i++)
                {
                    int nr=r+dr[i] , nc=c+dc[i];
                    if(!is_valid(nr,nc,heights) ||visited[nr][nc] || heights[r][c]>heights[nr][nc])
                    continue;

                    q.push({nr,nc});
                    visited[nr][nc]=true;
                }
            }
        }

    }
};