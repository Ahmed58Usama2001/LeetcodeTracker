class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i =0; i<n; i++){
            m[nums[i]]++;
        }
        int k= n/2;
        for(auto i : m){
            if(i.second > k){
                return i.first;
            }
        }
        return 0;
    }
    
};