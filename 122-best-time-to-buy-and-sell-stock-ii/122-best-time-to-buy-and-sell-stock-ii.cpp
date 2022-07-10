class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int>ans;
        int k;
        for(int i=0;i<n;i++)
        {
            k=i+1;
            while(k<n && prices[i]<prices[k])
            {
                ans.push_back(prices[k]-prices[i]);
                k++;
                break;
            }
        }
        int sum = 0;
        for(int i=0;i<ans.size();i++)
            sum =sum+ans[i];
        return sum;
    }
};