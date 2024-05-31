class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       int left=0,right=1,maxProfit=0,currentProfit;

       while(right<prices.size())
       {  
        if(prices[left]<prices[right])
        {  currentProfit=prices[right]-prices[left];
            maxProfit=max(currentProfit,maxProfit);
        }
        else
        left=right;

        right++;
       }

        return maxProfit;
    }
};