// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int minManipulation (int n, string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << minManipulation (n, s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int minManipulation (int N, string S1, string S2)
{
    // your code here
    vector<int>cs1(26,0);
    vector<int>cs2(26,0);
    int count = 0;
    for(int i=0;i<N;i++)
    {
        cs1[S1[i]-'a']++;
        cs2[S2[i]-'a']++;
    }
    
    for(int i=0;i<26;i++)
    {
        count = count + abs(cs1[i]-cs2[i]);
    }
    return count/2;
}