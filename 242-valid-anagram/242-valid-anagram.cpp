class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.size();
        int n = t.size();
        
        vector<int>a(26,0);
        vector<int>b(26,0);
        if(n!=m)
            return false;
        for(int i=0;i<m;i++)
        {
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }
        
        
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
};