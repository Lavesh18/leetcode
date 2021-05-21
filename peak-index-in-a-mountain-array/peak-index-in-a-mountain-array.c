

int peakIndexInMountainArray(int* arr, int arrSize){
if(arrSize==1)
    return 0;
    if(arr[0]>=arr[1])
        return 0;
    if(arr[arrSize-1]>=arr[arrSize-2])
        return arrSize-1;
    
    for(int i=1;i<arrSize-1;i++)
    {
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
            return i;
    }
    return 1;
}

