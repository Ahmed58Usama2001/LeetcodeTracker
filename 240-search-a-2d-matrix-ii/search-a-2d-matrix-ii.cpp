class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty())
        return false;
        int rows=matrix.size(),cols=matrix[0].size(),i=0,j=cols-1;
        while(i<rows && j>=0)
        {
            if(matrix[i][j]==target)
            return true;
            else if(matrix[i][j]>target)
            j--;
            else
            i++;
        }
        return false;
    }
};