class Solution {
public:
    int ssq(int n){
        int m = 0 , r;
        while(n!=0){
            r = n%10;
            n = n/10;
            m += r*r;
        }
        return m;
    }
    bool isHappy(int n) {
        if (n==1)
            return true;
        else if (n!=7 and n < 10)
            return false;
        else
            return isHappy(ssq(n));
        return false;
    }
};