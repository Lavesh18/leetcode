// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int l  = 0;
        int t = 0;
        int right = c-1;
        int b = r-1;
        int d = 0;
        vector<int>ans;
        if(r==0)
        return ans;
        while(l<=right && t<=b)
        {
            if(d==0)
            {
                for(int i=l;i<=right;i++)
                     ans.push_back(matrix[t][i]);
                
                t++;
                d=1;
            }
            else if(d==1)
            {
                for(int i=t;i<=b;i++)
                    ans.push_back(matrix[i][right]);
                right--;
                d=2;
            }
            else if(d==2)
            {
                for(int i=right;i>=l;i--)
                    ans.push_back(matrix[b][i]);
                b--;
                d=3;
            }
            else if(d==3)
            {
                for(int i=b;i>=t;i--)
                    ans.push_back(matrix[i][l]);
                l++;
                d=0;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends