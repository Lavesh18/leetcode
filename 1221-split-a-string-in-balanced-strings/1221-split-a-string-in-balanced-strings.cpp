class Solution {
public:
    int balancedStringSplit(string s) {
        int c1 = 0;
        int c2 = 0;
        int res = 0;
        for(auto i:s)
        {
            if(i=='R')
                c1++;
            else
                c2++;
            if(c1==c2)
                res++;
           
                
        }
        return res;
    }
};