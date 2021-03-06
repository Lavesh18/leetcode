class Solution {
public:
    /*int countsubset(vector<int>nums,int sum1)
    {
        int n=nums.size();
        int t[n+1][sum1+1];
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum1+1;j++)
            {
                if(i==0)
                    t[i][j]=0;
                if(j==0)
                    t[i][j]=1;
                    
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum1+1;j++)
            {
                if(nums[i-1]<=j)
                    t[i][j]=t[i-1][j-nums[i-1]]+t[i-1][j];
                else
                    t[i][j]=t[i-1][j];
            }
}
        return t[n][sum1];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int s=0,count=0,sumpart;
        for(int i=0;i<nums.size();i++)
            s=s+nums[i];
        
        if((target+s)%2==1)
            return 0;
        sumpart=(s+target)/2;
        count =countsubset(nums,sumpart);
        return count;
    }*/
    int countOfSubsetSum(vector<int> nums, int w)
  {
    int n = nums.size();
    int t[n+1][w+1];

    for(int i=0; i<n+1; i++)
    {
        for(int j=0; j<w+1; j++)
        {
            if(i == 0)
                t[i][j] = 0;
            if(j == 0)
                t[i][j] = 1;
        }
    }

    for(int i=1; i<n+1; i++)
    {
        for(int j=0; j<w+1; j++)
        {
            if(nums[i-1] <= j)
                t[i][j] = t[i-1][j] + t[i-1][j-nums[i-1]];
            else
                t[i][j] = t[i-1][j];
        }
    }
    return t[n][w];
  }
    
int findTargetSumWays(vector<int>& nums, int target)
{    
    int s = 0, c, sumOfFirstPartition;   
    
    for(int i=0; i<nums.size(); i++)
        s += nums[i];
    
    if((target+s)%2 == 1)
        return 0;

    sumOfFirstPartition = (s + target) / 2;
    c = countOfSubsetSum(nums, sumOfFirstPartition);
    return c;       
 }
};