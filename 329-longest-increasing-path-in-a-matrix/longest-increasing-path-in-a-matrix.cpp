class Solution {
public:

    struct node{
        int r,c;
    };

    int dr[4]={-1,0,0,1};
    int dc[4]={0,-1,1,0};

    bool isvalid(int r, int c, vector<vector<int>>& matrix)
    {
        if(r<0 || r>=matrix.size()) return false;
        if(c<0 || c>=matrix[0].size()) return false;
        return true;
    }

    pair<vector<node> , int> neighbors(int r, int c , vector<vector<int>> &matrix)
    {
        vector<node> edges;
    int indegree = 0;
    for(int d=0;d<4;d++)
    {
        int nr = r+dr[d], nc = c+dc[d];
        if(!isvalid(nr,nc,matrix))
        continue;

        if(matrix[r][c] < matrix[nr][nc])
        edges.push_back({nr, nc});

        else if(matrix[r][c] > matrix[nr][nc])
        indegree++;
    }
    return {edges , indegree};
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();

vector<vector<int>> indegree(rows, vector<int>(cols));	// rows x columns
queue<node> ready;

for (int r = 0; r < rows; ++r) {
	for (int c = 0; c < cols; ++c) {
		indegree[r][c] = neighbors(r, c, matrix).second;

		if (indegree[r][c] == 0)
			ready.push( { r, c });
	}
}

int levels = 0;
while (!ready.empty()) {
	int level_sz = ready.size();
	while (level_sz--) {
		int r = ready.front().r, c = ready.front().c;
		ready.pop();
		vector<node> neighbors_nodes = neighbors(r, c, matrix).first;

		for (auto node : neighbors_nodes)
			if (--indegree[node.r][node.c] == 0)
				ready.push(node);
	}
	++levels;
}
return levels;
    }
};