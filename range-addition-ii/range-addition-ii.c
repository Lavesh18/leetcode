

int maxCount(int m, int n, int** ops, int opsSize, int* opsColSize){
int i;
    int l=m;
    int h=n;
    for(i=0;i<opsSize;i++)
    {
        if(ops[i][0]<l)
            l=ops[i][0];
        if(ops[i][1]<h)
            h=ops[i][1];
    }
    return l*h;
}