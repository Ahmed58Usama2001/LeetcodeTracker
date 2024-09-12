class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int rows=matrix.size(),cols=matrix[0].size();
        vector<int>st;

        for(int i=0;i<rows;i++)
            for (int j=0;j<cols;j++)
                st.push_back(matrix[i][j]);
        
        sort(st.begin(),st.end());



        return st[k-1];
    }
};