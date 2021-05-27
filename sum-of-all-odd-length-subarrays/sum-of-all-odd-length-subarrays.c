

int sumOddLengthSubarrays(int* arr, int arrSize){
int res=0;
    for(int i=0;i<arrSize;i++)
    {
        for(int j=i;j<arrSize;j+=2)
        {
            for(int k=i;k<=j;k++)
            {
                res=res+arr[k];
            }
        }
    }
    return res;
}
 