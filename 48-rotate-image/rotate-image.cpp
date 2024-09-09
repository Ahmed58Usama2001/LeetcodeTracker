class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int> temp;

        for(int r=0;r<n;r++)
            for(int c=0; c<n;c++)
                temp.push_back(matrix[r][c]);

        int i=0;
            for(int c=n-1;c>=0;c--)
                for(int r=0;r<n;r++)
                    matrix[r][c]=temp[i++];
    }
};