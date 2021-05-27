class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size());
        int maxn=arr[arr.size()-1];
        ans[arr.size()-1]=-1;
        int i;
        for(i=arr.size()-2;i>=0;i--)
        {
            ans[i]=maxn;
            maxn=max(maxn,arr[i]);
        }
        return ans;
    }
};
