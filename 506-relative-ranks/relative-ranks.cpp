class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        vector<string>ans(score.size());

        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }

        vector<string>ranks = {"Gold Medal","Silver Medal","Bronze Medal"};
        int idx=1;
        while(!pq.empty()){
            auto top=pq.top();
            pq.pop();
            
            int index=top.second;

            if(idx<4){
                ans[index]=ranks[idx-1];
            }else{
                ans[index]=to_string(idx);
            }
            idx++;
        }
        return ans;
    }
    


};