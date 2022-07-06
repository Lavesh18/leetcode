class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        // int sum = 0;
        // for(int i=0;i<n;i++)
        // {
        //      sum = nums[i];
        //     for(int j=i+1;j<n;j++)
        //     {
        //         sum = sum+nums[j];
        //         if(sum==k)
        //             count++;
        //     }
        // }
        // return count;
        unordered_map<int,int>mp;
        mp[0]=1;
        int ans = 0;
        int sum = 0;
        
        for(int i=0;i<n;i++)
        {
            sum = sum+nums[i];
            if(mp.find(sum-k)!=mp.end())
                ans = ans+mp[sum-k];
            mp[sum]++;
        }
        return ans;
    }
};