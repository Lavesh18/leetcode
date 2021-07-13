class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_all = INT_MIN;
        int curr_sum = 0;
        for(int i=0;i<nums.size();i++){
            curr_sum = curr_sum+nums[i];
        if(max_all<curr_sum)
            max_all = curr_sum;
        if(curr_sum<0)
            curr_sum = 0;
    }
        return max_all;
    }
};