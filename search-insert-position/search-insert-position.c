

int searchInsert(int* nums, int numsSize, int target){
    int i;
for(i=0;i<numsSize;i++)
{
    if(nums[i]==target || target<nums[i])
    {
        return i;
    }
}
    return numsSize;
}