// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        
        // int check = 0;
        // int curSum  = 0;
        
        // for(int i=0;i<n;i++)
        // {
            
        //     curSum = curSum+arr[i];
        //     if(curSum==0)
        //         check = curSum;
        //     if(arr[i]==0)
        //         check = 0;
            
            
        // }
        
        // if(check == 0)
        //     cout<<"Yes";
        // else
        //     cout<<"No";
        // ---------------brute force-------------
        // int ma = 0;
        
        // for(int i=0;i<n;i++)
        // {
        //     int cur_sum = 0;
        //     for(int j=i;j<n;j++)
        //     {
        //         cur_sum = cur_sum+arr[j];
        //         if(cur_sum==0)
        //             ma = max(ma,j-i+1);
        //     }
        // }
        // if(ma>=1)
        //     return true;
        // else
        //     return false;
        //---------using hash map---------
        
          unordered_map<int,int>mp;
          int maxi = 0;
          int sum = 0;
          for(int i=0;i<n;i++)
          {
              sum = sum+arr[i];
              if(sum==0)
                maxi = i+1;
                else{
                    if(mp.find(sum)!=mp.end())
                        maxi = max(maxi,i-mp[sum]);
                    else
                        mp[sum] = i;//adding the prefix sum to the hashmap with i 
                }
          }
          return maxi;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  // } Driver Code Ends