class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int rowmin[row];
        int colmax[col];
        
        for(int i=0;i<row;i++)
        {
            rowmin[i]=INT_MAX;
        }
         for(int j=0;j<col;j++)
        {
            colmax[j]=INT_MIN;
        }
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                rowmin[i]=min(rowmin[i],matrix[i][j]);
                colmax[j]=max(colmax[j],matrix[i][j]);
                
            }
        }
        
        vector<int>res;
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(rowmin[i]==matrix[i][j] && colmax[j]==matrix[i][j])
                    res.push_back(matrix[i][j]);
            }
        }
        return res;
    }
};