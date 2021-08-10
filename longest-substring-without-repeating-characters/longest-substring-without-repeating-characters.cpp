class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        if(s.length()==0)
            return 0;
        int i=0,j=0,mx  = -1;
        while(j<s.length())
        {
            mp[s[j]]++;
            if(mp.size()==j-i+1)
            {
                mx = max(mx,j-i+1);
                j++;
            }
            else if(mp.size()<j-i+1)
            {
                while(mp.size()<j-i+1)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                        mp.erase(s[i]);
                    i++;
                  }
                j++;
            }
        }
        return mx;
    }
};