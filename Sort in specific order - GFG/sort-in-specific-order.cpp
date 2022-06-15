// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        // int i=0,j=0;
        // for(i=0;i<n;i++){
        //     if(arr[i]%2!=0){
        //         swap(arr[i],arr[j]);
        //         j++;
        //     }
        // }
        
        vector<long long>even;
        vector<long long>odd;
        
        int e=0,o=0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0){
                even.push_back(arr[i]);
                e++;
            }
            else if(arr[i]%2!=0){
                odd.push_back(arr[i]);
                o++;
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        for(int i=0;i<o;i++)
        {
            arr[i] = odd[i];
        }
        for(int i=o;i<n;i++)
            arr[i] = even[i-o];
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends