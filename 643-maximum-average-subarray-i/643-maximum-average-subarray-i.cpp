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
            sum = sum+nums[j];
            if(j-i+1<k)
            {
                
                j++;
            }
            
            else if(j-i+1==k)
            {
                
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