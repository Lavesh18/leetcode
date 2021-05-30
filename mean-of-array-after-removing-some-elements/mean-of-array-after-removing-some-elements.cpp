class Solution {
public:
    double trimMean(vector<int>& arr) {
      int newsize=arr.size()/20;
        int sum=0;
        sort(arr.begin(),arr.end());
        for(int i=newsize;i<arr.size()-newsize;i++)
            sum=sum+arr[i];
        
        return sum/((double)arr.size()-2*newsize);
    }
};
