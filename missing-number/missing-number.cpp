class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=nums.size()-1;
        while(i>=0)
        {
            if(nums[i]!=i+1)
                return i+1;
            i--;
        }
        return 0;
    }
};