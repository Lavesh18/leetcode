class Solution {
public:
    vector<int> constructRectangle(int area) {
        int n=sqrt(area);
        while(n>0)
        {
            int l=area/n;
            if(l*n==area)
                return {l,n};
            n--;
        }
        return {0,0};
    }
};