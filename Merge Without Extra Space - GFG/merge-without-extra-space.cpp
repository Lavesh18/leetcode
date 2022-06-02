// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    priority_queue<int>q;
	    
	    for(int i=0;i<n;i++)
	        q.push(arr1[i]);
	   for(int i=0;i<m;i++)
	    q.push(arr2[i]);
	    
	    vector<int>v;
	    while(!q.empty())
	        {
	            v.push_back(q.top());
	            q.pop();
	        }
	        
	        reverse(v.begin(),v.end());
	        int j=0;
	   for(int i=0;i<n;i++)
	   {
	       arr1[j] = v[i];
	       j++;
	   }
	   int k=0;
	   for(int i=n;i<v.size();i++)
	   {
	       arr2[k] = v[i];
	       k++;
	   }
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends