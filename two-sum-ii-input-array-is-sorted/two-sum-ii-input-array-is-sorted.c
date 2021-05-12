

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int *ans =(int *)malloc(2*sizeof(int));
    int i=0,j=numbersSize-1;
    while(i<j)
    {
        if(numbers[i]+numbers[j]<target)
            i++;
        else if(numbers[i]+numbers[j]>target)
            j--;
        else
        {
            ans[0]=i+1;
            ans[1]=j+1;
            break;
        }
        
    }
    *returnSize = 2;
    return ans;
  
    
}