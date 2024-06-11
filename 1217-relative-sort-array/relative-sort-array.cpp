class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> freq(1001,0);
        vector<int>res;

        for(int i=0;i<arr1.size();i++)
        freq[arr1[i]]++;

        for(int i=0;i<arr2.size();i++)
        {
            for(int j=0;j<freq[arr2[i]];j++)
                res.push_back(arr2[i]);

            freq[arr2[i]]=0;
        }

        for(int i=0;i<1001;i++)
          if(freq[i]>0)
            for(int j=0;j<freq[i];j++)
                res.push_back(i);

        return res;
    }
};