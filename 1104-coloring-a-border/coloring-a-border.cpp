class Solution {
public:
    const int dr[4] = {-1, 0, 1, 0};
    const int dc[4] = {0, 1, 0, -1};

    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int old_color = grid[row][col];
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        vector<vector<int>> res = grid;  

        dfs(grid, res, row, col, old_color, color, visited);
        
        return res;
    }

    void dfs(vector<vector<int>>& grid, vector<vector<int>>& res, int r, int c, int old_color, int new_color, vector<vector<bool>>& visited) {
        if (!is_valid(r, c, grid.size(), grid[0].size()) || visited[r][c] || grid[r][c] != old_color)
            return;
        
        visited[r][c] = true;
        bool is_border = false;

        for (int i = 0; i < 4; ++i) {
            int nr = r + dr[i], nc = c + dc[i];

            if (!is_valid(nr, nc, grid.size(), grid[0].size()) || grid[nr][nc] != old_color) {
                is_border = true;
            } else if (!visited[nr][nc]) {
                dfs(grid, res, nr, nc, old_color, new_color, visited);
            }
        }

        if (is_border) 
            res[r][c] = new_color;
        
    }

    bool is_valid(int r, int c, int rows, int cols) {
        return r >= 0 && r < rows && c >= 0 && c < cols;
    }
};
