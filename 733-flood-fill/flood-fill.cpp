class Solution {
public:
 
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<bool>>visited(image.size(),vector<bool>(image[0].size()));
        dfs(image , sr,sc,image[sr][sc] , color,visited);

        return image;
    }

    void dfs(vector<vector<int>>& image, int r, int c, int old_color,int new_color,
    vector<vector<bool>>& visited)
    {
        if(!is_valid(r,c,image.size(),image[0].size()) || visited[r][c] ||image[r][c]!=old_color)
        return;

        visited[r][c]=true; image[r][c]=new_color;

        int dr[] = {-1,0,1,0};
         int dc[] = { 0,1,0,-1 };
        for(int i=0;i<4;i++)
        dfs(image,r+dr[i],c+dc[i],old_color,new_color,visited);
    }

    bool is_valid(int r,int c , int rows,int cols)
    {
        if(r<0 || r>=rows || c<0 || c>=cols)
        return false;

        return true;
    }
};