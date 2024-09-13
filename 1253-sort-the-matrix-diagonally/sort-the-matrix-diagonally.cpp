class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int rows=mat.size(),cols=mat[0].size(),d=rows+cols-1;
        vector<vector<int>> res(rows,vector<int>(cols,0));
        vector<int>sorting;
        for(int r=0;r<rows;r++)
        {   int i=r,j=0;
            while(i>=0 && i<rows && j>=0 && j<cols)
                sorting.push_back(mat[i++][j++]);

            sort(sorting.begin(),sorting.end());

            i=r,j=0;
            int counter=0;
            while(i>=0 && i<rows && j>=0 && j<cols)
            {   
                res[i][j]=sorting[counter++];
                i++; 
                j++;
            }
            sorting.clear();
        }

        for(int c=0;c<cols;c++)
        {   int i=0,j=c;
            while(i>=0 && i<rows && j>=0 && j<cols)
                sorting.push_back(mat[i++][j++]);

            sort(sorting.begin(),sorting.end());

            i=0,j=c;
            int counter=0;
            while(i>=0 && i<rows && j>=0 && j<cols)
            {   
                res[i][j]=sorting[counter++];
                i++; 
                j++;
            }
            sorting.clear();
        }

        return res;
    }
};