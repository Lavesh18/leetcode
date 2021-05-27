class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int freq,val,i,j;
        for(i=0;i<nums.size()-1;i+=2)
        {
            freq=nums[i];
            val=nums[i+1];
        
        for(j=0;j<freq;j++)
        {
            ans.push_back(val);
        }
        }
        return ans;
    }
};
