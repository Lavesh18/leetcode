class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=0,index=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
                index=i;
            }
        }
    for(int i=0;i<nums.size();i++)
    {
        if(max<nums[i]*2 && nums[i]!=max)
            return -1;
    }
        return index;
    }
};

