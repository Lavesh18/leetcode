class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int k=0;
        vector<int>v;
        
        for(int i=0;i<n;i++)
        {
            k=i+1;
            
            while(k<n && prices[i]<prices[k])
            {
                v.push_back(prices[k]-prices[i]);
                k++;
            }
        }
        if(v.size()==0)
            return 0;
        return *max_element(v.begin(),v.end());
    }
};