class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int d=0;
        vector<int>ans;
        if(row==0)
            return ans;
        int l = 0;
        int r = col-1;
        int t = 0;
        int b = row-1;
        while(l<=r && t<=b)
        {
            if(d==0){
            for(int i=l;i<=r;i++)
            {
                ans.push_back(matrix[t][i]);
                
            }
                t++;
                d=1;
            }
            else if(d==1)
            {
                for(int i=t;i<=b;i++)
            {
                ans.push_back(matrix[i][r]);
               
            }
                 r--;
                d=2;
            }
            else if(d==2)
            {
                for(int i=r;i>=l;i--)
            {
                ans.push_back(matrix[b][i]);
               
                
            }
                d=3; b--;
            }
            else if(d==3)
            {
                for(int i=b;i>=t;i--)
            {
                ans.push_back(matrix[i][l]);
                
                
            }
                d=0;l++;
            }
        }
        return ans;
    }
};