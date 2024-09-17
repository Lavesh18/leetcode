class Solution {
    public int[] productExceptSelf(int[] nums) {
        //  int product =1;
        //  int[] res = new int[nums.length];
        // for(int i=0;i<nums.length;i++)
        // {
        //     product = product * nums[i];
        // }

        // for(int i=0;i<nums.length;i++)
        // {
        //     res[i] = product/nums[i];
        // }
        // return res;

        int n = nums.length;
        int[] left = new int[n];
        int[] right = new int[n];

        left[0] = 1;

        for(int i=1;i<n;i++)
        {
            left[i] = left[i-1]*nums[i-1];
        }
        right[n-1] = 1;
        for(int i=n-2;i>-1;i--)
        {
            right[i] = right[i+1] * nums[i+1];
        }
        int[] ans = new int[n];

        for(int i=0;i<n;i++)
        {
            ans[i] = left[i] * right[i];
        }

        return ans;
    }
}