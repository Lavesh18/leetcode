

int divide(int dividend, int divisor){
int res=0;
    long x=(long)dividend;
    long y=(long)divisor;
    long z=x/y;
    int low=pow(-2,31);
    int high=pow(2,31)-1;
    if(z<low || z>high)
        return high;
    else
    {
        res=z;
        
    }
    return res;
}


