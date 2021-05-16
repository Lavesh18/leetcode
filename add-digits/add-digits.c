

int addDigits(int num){
    int rem,sum=0;
while(num!=0)
{
    rem=num%10;
    num=num/10;
    sum=sum+rem;
}
    while(sum>9)
    {
        rem=sum%10;
        sum=sum/10;
        sum=sum+rem;
    }
    return sum;
}