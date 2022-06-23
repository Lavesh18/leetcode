class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(256,-1);
        int n = s.size();
        int left = 0;
        int right = 0;
        
        int ma = 0;
        
        while(right<n)
        {
            if(mp[s[right]]!=-1)
                left = max(left,mp[s[right]]+1);
            mp[s[right]] = right;
            ma = max(ma,right-left+1);
            right++;
        }
        return ma;
    }
};