// Last updated: 4/6/2026, 1:22:26 PM
1public class Solution {
2    public int MaxProfit(int[] prices) {
3    int left=0,right=1,maxProfit=0,currentProfit;
4    while(right<prices.Length)
5    {
6        if(prices[left]<prices[right])
7        {
8            currentProfit = prices[right] - prices[left];
9            maxProfit = Math.Max(currentProfit,maxProfit);
10        }
11        else
12            left=right;
13
14
15        right++;
16    }
17
18        return maxProfit;
19    }
20}