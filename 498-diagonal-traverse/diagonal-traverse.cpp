class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int rows=mat.size(),cols=mat[0].size(),i,j;

        vector<int>res;
        for(int d=0;d<rows+cols-1;d++)
        {
            for(int x=0;x<=d;x++)
            {
                i=x;
                j=d-i;
                if(d%2==0)
                swap(i,j);

                if(i>=rows || j>=cols)
                continue;

                res.push_back(mat[i][j]);
            }
        }
        return res;
    }
};