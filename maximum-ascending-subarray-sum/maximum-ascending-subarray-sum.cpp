class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = 0,maxi = 0;
        sum  = nums[0];
        maxi = max(sum,maxi);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
                sum = sum+nums[i];
            else
                sum = nums[i];
            maxi = max(sum,maxi);
        }
        return maxi;
    }
};