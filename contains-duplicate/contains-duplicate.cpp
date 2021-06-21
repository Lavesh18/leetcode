class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count=1;
        sort(nums.begin(),nums.end());
        int i;
        for(i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
                count++;
            if(count>=2)
                return true;
        }
        return false;
    }
};