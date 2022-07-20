class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long a = n;
        if(a<0)
            a=a*-1;
        while(a){
            if(a%2==1)
            {
                ans = ans*x;
                a=a-1;
            }
            else
            {
                x=x*x;
                a=a/2;
            }
        }
        if(n<0)
            ans = double(1.0)/double(ans);
        return ans;
    }
};