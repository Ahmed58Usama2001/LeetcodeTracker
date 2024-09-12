class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int rows=matrix.size(),cols=matrix[0].size();
        multiset<int>st;

        for(int i=0;i<rows;i++)
            for (int j=0;j<cols;j++)
                st.insert(matrix[i][j]);
        
        int counter=1;
        for (const int& element : st) {
            cout<<element<<" ";
        if(counter==k)
        return element;
        counter++;
        }

        return -1;
    }
};