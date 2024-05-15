class Solution {
public:
       static  bool compareBySecond(const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second > b.second;
        }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        vector<int>result;

        for (int i=0;i<nums.size();i++) {
               hash[nums[i]]++; 
        }
        
      priority_queue<pair<int,int>>pq;
      for(auto it=hash.begin();it!=hash.end();it++)
      {
        pq.push(make_pair(it->second,it->first));
      }

      for(int i=0;i<k;i++)
      {
        result.push_back(pq.top().second);
        pq.pop();
      }

    return result;
  
    }
};