class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>count(2001,0);
        unordered_set<int> mySet;
        
        for(int i=0;i<arr.size();i++)
        count[arr[i]+1000]++;

        for(int i=0;i<count.size();i++)
        {   
            if(count[i]>0 && mySet.count(count[i]) == 0)
            mySet.insert(count[i]);
            else if(mySet.count(count[i]) > 0)
            return false;
        }

        return true;
        
    }
};