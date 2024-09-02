class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0,left=0,right=1;

        while(right<prices.size())
        {
            if(prices[right]>prices[left])
            res+=prices[right]-prices[left];

            left++;
            right++;
        }

        return res;
    }
};