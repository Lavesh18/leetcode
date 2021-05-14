

int search(int* nums, int numsSize, int target){
int i,left=0,mid=0,right=numsSize-1;
    while(left<=right)
    {
        mid=(right+left)/2;
        if(target==nums[mid])
            return mid;
        else if(target<nums[mid])
            right=mid-1;
        else if(target>nums[mid])
            left=mid+1;
        
    }
    return -1;
}