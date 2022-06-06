class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        //brute force
        int n = nums.size();
//         int mi = INT_MAX;
//         for(int i=0;i<n;i++)
//         {
//             int s=0;
//             for(int j=i;j<n;j++)
//             {
//                 s+=nums[j];
                
//                 if(s>=target)
//                     mi = min(mi,j-i+1);
                
               
//             }
//         }
//         if(mi==INT_MAX)
//             return 0;
//         return mi;
        
        
        //2 pointer
        
        int i=0,j=0;
        int s = 0;
        int mi = INT_MAX;
        
        
        while(i<=j && j<n)
            {
            while(s<target && j<n)
            {
                s+=nums[j];
                j++;
            }
            while(s>=target && i<j)
            {
                mi = min(mi,j-i);
                s = s-nums[i];
                i++;
            }
        }
        if(mi==INT_MAX)
            return 0;
        return mi;
    }
};