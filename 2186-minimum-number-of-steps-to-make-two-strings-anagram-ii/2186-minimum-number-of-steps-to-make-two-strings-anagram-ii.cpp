class Solution {
public:
    int minSteps(string s, string t) {
        int m = s.size();
        int n = t.size();
        
        int count= 0;
        
        
        vector<int>cs(26,0);
        vector<int>ct(26,0);
        
        for(int i=0;i<m;i++)
        {
            cs[s[i]-'a']++;
        }
        for(int j=0;j<n;j++)
        {
            ct[t[j]-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            count = count+abs(cs[i]-ct[i]);
        }
       return count;
    }
};