class Solution {
public:
    bool isPerfectSquare(int num) {
        int y=sqrt(num);
        if(num%y==0 && num/y==y)
        {
            return true;
        }
        else
            return false;
    }
};