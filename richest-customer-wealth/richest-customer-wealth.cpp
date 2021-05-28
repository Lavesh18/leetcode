class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>v;
        int sum=0;
        for(vector<int>v:accounts)
        {
            int curr=0;
            for(int i:v)
                curr+=i;
            sum=max(sum,curr);
        }
        return sum;
    }
};