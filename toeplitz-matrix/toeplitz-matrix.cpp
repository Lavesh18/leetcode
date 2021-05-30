class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int i,j;
        int n= matrix.size();
        int m=matrix[0].size();
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i>0 &&j>0 && (matrix[i-1][j-1]!=matrix[i][j]))
                   return false;
            }
        }
                   return true;
        
        
    }
};