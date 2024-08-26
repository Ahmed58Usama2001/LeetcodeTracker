class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();

        set<int>rs,cls;

        for(int r=0;r<rows;r++)
        {
            for(int c=0;c<cols;c++)
            {
                if(!matrix[r][c])
                {
                    rs.insert(r);
                    cls.insert(c);
                }
            }
        }

         for(int r=0;r<rows;r++)
        {
            for(int c=0;c<cols;c++)
            {
                if(rs.count(r) || cls.count(c))
                matrix[r][c]=0;
            }
        }
    }
};