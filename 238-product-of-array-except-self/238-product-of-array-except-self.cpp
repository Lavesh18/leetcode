class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int pro = 1;
        int count = 0;
        vector<int>ans(n,0);
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                count++;
            else
                pro = pro*nums[i];
        }
        if(count > 1) return ans;
        for(int i=0;i<n;i++)
        {
            if(count!=0)
            {
                if(nums[i]==0)
                {
                    ans[i] = pro;
                    return ans;
                }
            }
            else
                ans[i] = pro/nums[i];
        }
        return ans;
    }
};