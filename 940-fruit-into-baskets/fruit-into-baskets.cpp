class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0,right=0,res=0;
        unordered_map<int,int>mp;

        while(right<fruits.size())
        {
            mp[fruits[right]]++;

            if(mp.size()>2)
            {
                if(--mp[fruits[left]]==0)
                mp.erase(fruits[left]);

                left++;
            }
            else
            res=max(res,right-left+1);


            right++;
        }
        return res;
    }
};