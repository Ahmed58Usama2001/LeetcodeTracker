class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0,right=n,top=0,bottom=n,counter=1;
        vector<vector<int>>matrix(n,vector<int>(n,0));

         while(left<right && top<bottom)
        {
            for(int i=left;i<right;i++)
            matrix[top][i]=counter++;
            top++;

            for(int i=top;i<bottom;i++)
            matrix[i][right-1]=counter++;
            right--;

            if(!(left<right && top<bottom))
            break;

            for(int i=right-1;i>left-1;i--)
            matrix[bottom-1][i]=counter++;
            bottom--;

            for(int i=bottom-1;i>top-1;i--)
            matrix[i][left]=counter++;
            left++;

        }

        return matrix;
    }
};