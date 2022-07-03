class Solution {
public:
    int minSteps(string s, string t) {
        int m = s.size();
        int n =t.size();
        
        int count = 0;
        vector<int>a(26,0);
        vector<int>b(26,0);
        
        for(int i=0;i<m;i++)
        {
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            count = count + abs(a[i]-b[i]);
        }
        return count/2;
    }
};