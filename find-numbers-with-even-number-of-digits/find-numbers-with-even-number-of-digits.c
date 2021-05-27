int findNumbers(int* nums, int numsSize){
    int count=0;
    for(int i=0;i<numsSize;i++)
    {
        int d=0;
        while(nums[i])
        {
            nums[i]/=10;
            d++;
        }
        count+=(d%2==0);
    }
    return count;
}