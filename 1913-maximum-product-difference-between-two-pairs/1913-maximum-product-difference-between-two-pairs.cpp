class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int i = nums.size();
        
             ans = (nums[i-1]*nums[i-2])-(nums[0]*nums[1]);
        
        
        return ans;
        
    }
};