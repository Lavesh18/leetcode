class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
       int n = nums.size();
//         int ans = 0;
//         int mi = INT_MAX;
//         int ma = INT_MIN;
//         for(int i=0;i<n;i++)
//         {
//             ans = 1;
//             for(int j=0;j<n;j++)
//             {
                
//             }
//         }
        
        // priority_queue<int>ma;
        // priority_queue<int,vector<int>,greater<int>>mi;
        
        priority_queue<pair<int,int>> ma;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> mi;
        int i=0,j=0;
        int diff = 0;
        
        
        while(j<n)
        {
            ma.push({nums[j],j});
            mi.push({nums[j],j});
            
            while(ma.top().second<i)
                ma.pop();
            while(mi.top().second<i)
                mi.pop();
            if(ma.top().first-mi.top().first<=limit)
            {
                diff = max(diff,j-i+1);
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        return diff;
            
    }
};