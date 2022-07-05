class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // vector<int>ans;
         int n= nums.size();
        // ans.push_back(nums[0]);
        // int res = 0;
        // for(int i=0,j=1;i<n,j<n;i++,j++)
        // {
        //     res = ans[i]+nums[j];
        //     ans.push_back(ans[i]);
        // }
        // return ans;
        
        for(int i=1;i<n;i++)
        {
            nums[i] = nums[i]+ nums[i-1];
        }
        return nums;
    }
};