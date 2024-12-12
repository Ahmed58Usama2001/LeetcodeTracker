class Solution {
public:
    int minSetSize(vector<int>& arr) {

        int n = arr.size(), target = n/2;

        unordered_map<int,int>mp;
        priority_queue<int>pq;

        for(int i =0;i<n;i++)
        mp[arr[i]]++;

        for (auto& pair : mp) 
        pq.push(pair.second);

        int counter=0;
        while(n>target)
        {
            n-=pq.top();
            pq.pop();
            counter++;
        }

        return counter;
    }
    
};