class Solution {
    public int search(int[] nums, int target) {
        int n = nums.length;
        int mid = 0;


        int i = 0;
        int j = n-1;

        while(i<=j)
        {
            mid = i+(j-i)/2;

            if(target == nums[mid])
            {
                return mid;
            }

            else if (target < nums[mid])
            {
                j=mid-1;
            }

            else
            {
                i=mid+1;
            }


        }
        return -1;
    }
}