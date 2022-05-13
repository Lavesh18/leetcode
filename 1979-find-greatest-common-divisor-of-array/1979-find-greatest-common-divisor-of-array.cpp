class Solution {
public:
    int gcd(int a,int b) {
        if(b==0)
            return a;
        else if(a==0)
            return b;
        else
            return gcd(b,a%b);
            
    }   
    int findGCD(vector<int>& nums) {
       // int ans = 0;
        sort(nums.begin(),nums.end());
        int min = nums[0];
        int max = nums[nums.size()-1];
        
        return gcd(max,min);
        
    }
};