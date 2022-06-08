class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        int i=0;
        int j=0;
        double res;
        double ma = INT_MIN;
        while(j<n)
        {
            if(j-i+1<k)
            {
                sum = sum+nums[j];
                j++;
            }
            
            else if(j-i+1==k)
            {
                sum=sum+nums[j];
                res = sum/k;
                
                
                if(res>ma)
                    ma = res;
                
                sum = sum-nums[i];
            i++;
            j++;
            }
            
        }
        return ma;
    }
};