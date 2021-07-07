class Solution {
public:
  
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int su=0;
        int sum;
        for(int i=0;i<n;i++)
            su=su+nums[i];
        if(su%2!=0)
            return false;
        else
            sum=su/2;
        
        bool t[n+1][sum+1];
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0)
                    t[i][j] = false;
                if(j==0)
                    t[i][j]=true;
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(nums[i-1]<=j)
                    t[i][j] = t[i-1][j-nums[i-1]] || t[i-1][j];
                else
                    t[i][j] = t[i-1][j];
            }
        }
        return t[n][sum];
    }
};