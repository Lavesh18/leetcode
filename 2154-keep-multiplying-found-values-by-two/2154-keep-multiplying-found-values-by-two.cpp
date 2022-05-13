class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        
        // int low= 0;
        // int high = nums.size()-1;
        // int mid;
        // while(low<high)
        // {
        //    mid = low - (low+high)/2;
        //     if(original==nums[mid])
        //         original = original*2;
        //     else if(original<nums[mid])
        //         high = mid-1;
        //     else
        //         low = mid+1;
        // }
        // return original;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(original == nums[i])
                original = original*2;
        }
        return original;
        
    }
};