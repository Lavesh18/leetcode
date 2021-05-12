

int removeDuplicates(int* nums, int numsSize){
int i,j=1;
    
    if (numsSize <= 1) 
        return numsSize;
    for(i=1;i<numsSize;i++)
    {
        if(nums[i]!=nums[i-1])
        {
            nums[j++]=nums[i];
        }
    }
    return j;
}
