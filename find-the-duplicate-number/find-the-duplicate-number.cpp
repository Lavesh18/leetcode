class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       /* int i,j,count;
        for(i=0;i<nums.size();i++)
        {
            count=1;
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                     count++;
                    nums[j]=-1;
                    
                }
            }
                    if(count>1)
            return nums[i];
        }
        return nums[i];*/
        
        map<int,int> m;
        int res;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>1)
            {
                res=nums[i];
                    break;
            }
                
        }
        return res;
    }
};