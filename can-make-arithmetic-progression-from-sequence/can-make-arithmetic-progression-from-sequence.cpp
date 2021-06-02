class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int a=arr[0];
        int b=arr[1];
        int c=abs(a-b);
        for(int i=1;i<arr.size();i++)
        {
            if(abs(arr[i]-arr[i-1])!=c)
                return false;
        }
        return true;
    }
};