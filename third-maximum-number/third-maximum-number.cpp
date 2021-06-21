class Solution {
public:
    int max1(vector<int>&arr)
    {
        int max=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>max)
                max=arr[i];
        }
        return max;
    }
    int thirdMax(vector<int>& nums) {
        set<int>s1;
        sort(nums.begin(),nums.end());
        
       for(int i=nums.size()-1;i>=0;i--)
       {
            s1.insert(nums[i]);
           if(s1.size()==3)
               break;
                
      }
        if(s1.size()<3)
            return max1(nums);
        else
            return (*(s1.begin()));
    }
};
