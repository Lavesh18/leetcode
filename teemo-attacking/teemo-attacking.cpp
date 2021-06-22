class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
    if (n == 0) return 0;
    int ans=duration;
    
    for(int i=1;i<timeSeries.size();i++)
    {
        if(timeSeries[i]<=timeSeries[i-1]+duration-1)
            ans += - timeSeries[i-1] + timeSeries[i];
        else
            ans+=duration;
    }
    
    return ans;
    }
};