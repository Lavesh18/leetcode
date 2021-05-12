

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *ans = malloc((*returnSize = 2)*sizeof(int));
int i,j,diff;
    for(i=0;i<numsSize;i++){
        diff=target-nums[i];
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[j]==diff){
                ans[0]=i;
                ans[1]=j;
                break;
            }
                
        }
    }
    return ans;
    
}

