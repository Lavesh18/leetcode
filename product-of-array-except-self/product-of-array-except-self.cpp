class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n=nums.size();
        int pro=1;
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            res.push_back(pro);
            pro=pro*nums[i];
        }
        pro=1;
        for(int i=res.size()-1;i>=0;i--)
        {
            res[i]=res[i]*pro;
            pro=pro*nums[i];
      }
        return res;
    }
};
