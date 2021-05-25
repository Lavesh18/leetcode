

int subtractProductAndSum(int n){
int pro=1,sum=0,rem;
    while(n)
    {
       rem=n%10;
        pro=pro*rem;
        sum=sum+rem;
        n=n/10;
    }
    return pro-sum;
    
}