class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
         int dp[n];
        dp[0] = 1;
        for(int i=1;i<n;i++)
        {
            dp[i] = 1;
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                    dp[i] = max(dp[i],1+dp[j]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(res<dp[i])
                res = dp[i];
        }
        return res;
        
    }
};