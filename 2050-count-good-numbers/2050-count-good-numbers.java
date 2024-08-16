class Solution {
    public long mod = 1000000007; 
    public long pow(long x,long p)
    {
        if(p==0)
        {
            return 1;
        }
        if(p==1)
        {
            return x;
        }
        long check = pow(x,p/2);
        if(p%2==1)
        {
             return (x*check*check)%mod;
        }
        else
        {
            return (check*check)%mod;
        }

    }
    public int countGoodNumbers(long n) {
        //so we have 5 options for even indices that is 0,2,4,6,8 
        // and for odd we have 2,3,5,7

        //possiblities of making good numbers are 
        //5^(n/2+n%2) for even indices and 4^(n/2) for odd indices
        long odd = n/2;
        long even = (n+1)/2;
        return (int)(pow(5,even)*pow(4,odd)%mod);
        

    }
}