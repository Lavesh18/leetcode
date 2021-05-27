

int sumOfUnique(int* nums, int numsSize){

        int i,j,sum=0,count;
        for(i=0;i<numsSize;i++)
        {
            count=0;
            for(j=0;j<numsSize;j++)
            {
                if(nums[i]==nums[j])
                    count++;
            }
            if(count==1)
                sum=sum+nums[i];
        }
        return sum;
    }

