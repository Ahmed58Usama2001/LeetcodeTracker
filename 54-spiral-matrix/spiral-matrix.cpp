class Solution {
    
public:

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int dx[]={0,1,0,-1};
        int dy[]={1,0,-1,0};
        int left=0,right=matrix[0].size(),top=0,bottom=matrix.size();
        vector<int>result;


        while(left<right && top<bottom)
        {
            for(int i=left;i<right;i++)
            result.push_back(matrix[top][i]);
            top++;

            for(int i=top;i<bottom;i++)
            result.push_back(matrix[i][right-1]);
            right--;

            if(!(left<right && top<bottom))
            break;

            for(int i=right-1;i>left-1;i--)
            result.push_back(matrix[bottom-1][i]);
            bottom--;

            for(int i=bottom-1;i>top-1;i--)
            result.push_back(matrix[i][left]);
            left++;

        }

      return result;
    }
};