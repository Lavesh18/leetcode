class Solution {
public:
//     int LCS(string text1, string text2,int m,int n)
//     {
//         if(n==0 || m==0)
//             return 0;
//         if(text1[m-1]==text2[n-1])
//             return 1+LCS(text1,text2,m-1,n-1);
//         else
//             return max(LCS(text1,text2,m,n-1),LCS(text1,text2,m-1,n));
//     }
    int longestCommonSubsequence(string text1, string text2) {
//        int m= text1.size();
        int m= text1.size();
        int n = text2.size();
        
        int t[m+1][n+1];
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                    t[i][j] = 0;
            }
        }
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(text1[i-1]==text2[j-1])
                    t[i][j] = 1+t[i-1][j-1];
                else
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[m][n];
    }
};