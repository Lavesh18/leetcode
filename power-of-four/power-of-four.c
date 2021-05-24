

bool isPowerOfFour(int n){
if(n==1)return true;
    while(n)
    {
        if(n==1)return true;
        if(n%4!=0)return false;
        n=n/4;
        
    }
    return false;
}