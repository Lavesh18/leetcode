class Solution {
    public double myPow(double x, int n) {
        //base case
        if(n==0)
        {
            return 1.0;
        }
        if(n==1)
        {
            return x;
        }
        if(n%2 ==1)
        {
            return x*myPow(x,n-1);
        }
        if(n%2 == 0)
        {
            return myPow(x*x,n/2);
        }

        return 1/myPow(x,-n);
    }
};