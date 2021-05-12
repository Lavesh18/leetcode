

bool isPalindrome(int x){
long long int reverse=0;
    int rem,orignal=x;
    if(x<0)
        return false;
    while(x!=0)
    {
        rem=x%10;
        reverse=reverse*10+rem;
        x=x/10;
    }
    if(orignal==reverse)
        return true;
    else
        return false;
}