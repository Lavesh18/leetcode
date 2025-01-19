class Solution {
    public int binary(int[] arr,int target,int left, int right)
    {
        if(left>right)
        {   
            return -1;
        }

        int mid = left+(right-left)/2;
        if(arr[mid] == target)
        {
            return mid;
        }

        if(arr[mid]>= arr[left])
        {
            if(arr[left]<=target && arr[mid]>=target)
            {
                return binary(arr,target,left,mid-1);
            }
            else
            {
                return binary(arr,target,mid+1,right);
            }
        }
        else
        {
            if(arr[right]>=target && arr[mid]<=target)
            {
                return binary(arr,target,mid+1,right);
            }
            else
            {
                return binary(arr,target,left,mid-1);
            }
        }


    }
    public int search(int[] nums, int target) {
        int left = 0;
        int right = nums.length-1;
        return binary(nums,target,left,right);
    }
}