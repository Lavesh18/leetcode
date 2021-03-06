class Solution {
public:
    int LCS(string a,string b)
    {
        int m = a.size();
        int n = b.size();
        
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
                if(a[i-1]==b[j-1])
                    t[i][j] = 1+t[i-1][j-1];
                else
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[m][n];
    }
    int LPS(string s1)
    {
        string r1=s1;
        string r2=r1;
        reverse(r2.begin(),r2.end());
        return LCS(s1,r2);
    }
    int minInsertions(string s) {
        return s.length()-LPS(s);
    }
};