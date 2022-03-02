// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    void solve(vector<int>nums,vector<int>output,int i,vector<vector<int>>&ans)
    {
        if(i>=nums.size())
        {
            ans.push_back(output);
            return ;
            
        }
        
        solve(nums,output,i+1,ans);
        
        int ele = nums[i];
        output.push_back(ele);
        solve(nums,output,i+1,ans);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<vector<int>>ans;
        vector<int>output;
        int i=0;
        solve(A,output,i,ans);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends
