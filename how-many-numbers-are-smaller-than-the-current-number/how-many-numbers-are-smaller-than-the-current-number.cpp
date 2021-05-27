class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>res;
        int i,j,count,max;
        
        for(i=0;i<nums.size();i++)
        {
            count = 0;
           
            for(j=0;j<nums.size();j++)
            {
                if(nums[j]<nums[i] && j!=i)
                    count++;
                
            }
            res.push_back(count);
        }
        return res;
        
            
    }
};