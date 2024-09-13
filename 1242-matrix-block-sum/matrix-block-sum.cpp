class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int rows=mat.size(),cols=mat[0].size();
        vector<vector<int>>ans(rows,vector<int>(cols,0));

        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                for(int r=i-k;r<=i+k;r++)
                    for(int c=j-k;c<=j+k;c++)
                        if(r>=0 && r<rows && c>=0 && c<cols)
                        ans[i][j]+=mat[r][c];
                    
                
            
        

        return ans;
    }
};