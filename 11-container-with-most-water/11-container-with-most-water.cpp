class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n-1;
        int res = INT_MIN;
        while(l<r)
        {
            res= max(res,min(height[l],height[r])*(r-l));
            
            if(height[l]>height[r])
                r--;
            else
                l++;
        }
        return res;
            
    }
};