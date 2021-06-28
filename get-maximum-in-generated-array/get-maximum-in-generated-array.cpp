class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0 || n==1)
            return n;
        int maxno=0;
        vector<int>arr;
        arr.push_back(0);
        arr.push_back(1);
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
                arr.push_back(arr[i/2]);
            else
                arr.push_back(arr[i/2]+arr[(i/2)+1]);
            maxno=max(maxno,arr[i]);
        }
        return maxno;
    }
};
