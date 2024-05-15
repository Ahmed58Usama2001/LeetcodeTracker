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
        
        vector<pair<int, int>> mapVector(hash.begin(), hash.end());
        sort(mapVector.begin(), mapVector.end(), compareBySecond);

        for(int i=0;i<k;i++)
        {
          result.push_back(mapVector[i].first);
        }

    return result;
  
    }
};