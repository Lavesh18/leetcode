// { Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  //Your code here
  int leftS = 0;
  int rightS = 0;
  int mid = n/2;
  for(int i=0;i<mid;i++)
  {
      leftS = leftS+A[i];
  }
  
  for(int i=n-1;i>mid;i--)
  {
      rightS = rightS + A[i];
  }
  
  if(rightS>leftS)
  {
      while(rightS>leftS && mid<n-1){
      rightS = rightS-A[mid+1];
      leftS = leftS+A[mid];
      mid++;
      }
  }
  else
  {
      while(leftS>rightS && mid>0)
      {
          leftS = leftS-A[mid-1];
      rightS = rightS+A[mid];
      
      mid--;
      }
  }
  
  if(rightS==leftS)
    return mid;
    else
        return -1;
}