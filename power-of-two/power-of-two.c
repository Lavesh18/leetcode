

bool isPowerOfTwo(int n){
if(n==1)
    return true;
while(n)
{
    if(n==1)return true;
    if(n%2!=0)return false;
    n=n/2;
}
    return false;
}