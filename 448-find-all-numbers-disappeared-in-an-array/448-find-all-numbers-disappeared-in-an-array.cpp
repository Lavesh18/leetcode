class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
            int n = nums.size();
            vector<int>ans(n+1,0);
               vector<int>res; 
                for(int i=0;i<n;i++)
                    ans[nums[i]]++;
        
            for(int i=1;i<ans.size();i++)
            {
                if(ans[i]==0)
                    res.push_back(i);
            }
        return res;
                
         }
};