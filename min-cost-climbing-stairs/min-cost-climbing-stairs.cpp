class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i=2;
        int n=cost.size();
        
        while(i<n)
        {
            cost[i]+=min(cost[i-1],cost[i-2]);
            i++;
            
        }
        return min(cost[n-1],cost[n-2]);
    }
};