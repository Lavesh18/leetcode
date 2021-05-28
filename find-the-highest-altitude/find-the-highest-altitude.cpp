class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int i,curr=0,high=0;
        for(i=0;i<gain.size();i++)
        {
            curr=curr+gain[i];
            high=max(curr,high);
        }
        return high;
    }
};