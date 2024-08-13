class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        unordered_map<char,bool>hash;

        for(int i=0;i<jewels.size();i++)
            hash[jewels[i]]=true;

        for(int i=0;i<stones.size();i++)
        if(hash[stones[i]])
        ans++;

        return ans;
    }
};