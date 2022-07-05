class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // vector<vector<int>>ans;
        // int n = nums.size();
        // int sum;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         for(int k=j+1;k<n;k++)
        //         {
        //             if(nums[i]+nums[j]+nums[k]==0 && )
        //                 ans.push_back({nums[i],nums[j],nums[k]});
        //         }
        //     }
        // }
        // return ans;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int first = nums[i];
            int t = -first;
            int s = i+1;
            int e = n-1;
            
            while(s<e)
            {
                if(nums[s]+nums[e]==t)
                {
                    ans.push_back({nums[i],nums[s],nums[e]});
                    while(s<e && nums[s]==nums[s+1]) s++;// because of no duplicates in s value
                    while(s<e && nums[e]==nums[e-1]) e--;//ecause of no duplicates in e value
                    s++;
                    e--;
                }
                else if(nums[s]+nums[e]>t)
                    e--;
                else
                    s++;
            }
            while(i+1<n && nums[i]==nums[i+1]) i++; // because of no duplicates in i value
        }
        return ans;
    }
};