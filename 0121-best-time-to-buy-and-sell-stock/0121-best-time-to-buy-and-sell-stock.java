class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int currPrice = prices[0];

        int profit = 0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]<currPrice)
            {
                currPrice = prices[i];
            }

            int currProfit = prices[i]-currPrice;
            profit = Math.max(currProfit,profit);
        }

        return profit;
    }
}