class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
//         int max_product = 0;
//         int cur_product = 0;
        
//         for(int i=0;i<n;i++)
//         {
//             cur_product = cur_product*nums[i];
//             if(cur_product > max_product)
//                 max_product = cur_product;
//             if(cur_product<0)
//                 cur_product = 0;
//         }
//         return max_product;
        
        
       //bf
//         int max_product =INT_MIN;
        
//         for(int i=0;i<n;i++){
//            int cur_product = 1;
            
//         for(int j=i;j<n;j++)
//         {
//             cur_product = cur_product*nums[j];
//  max_product = max(max_product,cur_product);
            
//         }
           
            
//         }
//         return max_product;
        
        int ma = nums[0];
        int mi = nums[0];
        
        int ans = nums[0];
        
        for(int i=1;i<n;i++)
        {
            
            if(nums[i]<0)
                swap(ma,mi);
            ma = max(nums[i],nums[i]*ma);
            mi = min(nums[i],nums[i]*mi);
            
            ans = max(ma,ans);
        
        }
       
        return ans;
        
    }
};