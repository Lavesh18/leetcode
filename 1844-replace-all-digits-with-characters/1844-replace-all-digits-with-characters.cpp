class Solution {
public:
    string replaceDigits(string s) {
        int n = s.length();
        for(int i=1;i<n;i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                s[i] = s[i-1]+(s[i]-48);
                
            }
        }
        return s;
    }
};