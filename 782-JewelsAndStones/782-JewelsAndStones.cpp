// Last updated: 3/7/2026, 4:15:53 PM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
   int ans =0;

   for(int i=0;i<jewels.size();i++)
   ans+=count(stones.begin(),stones.end(),jewels[i]);

   return ans;
}
};