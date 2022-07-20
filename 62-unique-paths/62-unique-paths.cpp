class Solution {
public:
    // int fact(int n)
    // {
    //     if(n==0 || n==1)
    //         return 1;
    //     return n*fact(n-1);
    // }
    int uniquePaths(int m, int n) {
        // recursive code
//         int i=0,j=0;
        
//         if(i==m-1 && j==n-1)
//             return 1;
//         else if(i>=m || j>=n)
//             return 0;
//         else
//             return uniquePaths(i+1,j)+uniquePaths(i,j+1);
        
        
//         better approach using p&c
        int dir = m+n-2;
        int r = m-1;
        double res = 1;
        for(int i=1;i<=r;i++)
         res =  res*(dir-r+i)/i;
        return (int)res;
        
    }
};