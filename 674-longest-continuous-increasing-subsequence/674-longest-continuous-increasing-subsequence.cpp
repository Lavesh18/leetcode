class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 1;
        int ma = 1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                count++;
                ma = max(count,ma);
            }
            else
                count = 1;
        }
        return ma;
    }
};