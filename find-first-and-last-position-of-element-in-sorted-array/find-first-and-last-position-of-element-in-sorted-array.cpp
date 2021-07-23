class Solution {
public:
    int BinarySearch(vector<int>& nums, int target, bool fo)
    {
        int start = 0,end = nums.size()-1,res = -1;
        while(start<=end)
        {
            int mid = start+(end-start)/2;
            if(target == nums[mid])
            {
                res = mid;
                if(fo)
                    end = mid-1;
                else
                    start = mid+1;
            }
            else if(target<nums[mid])
                end = mid-1;
            else
                start = mid+1;
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {BinarySearch(nums,target,true),BinarySearch(nums,target,false)};
    }
};