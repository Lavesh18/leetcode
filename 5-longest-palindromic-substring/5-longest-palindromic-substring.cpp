class Solution {
public:
    string check(string s,int start,int end)
    {
        while(start>=0 && end<s.size())
        {
            if(s[start] == s[end])
            {
                start--;
                end++;
            }
            else break;
        }
        start++;
        end--;
        
        return s.substr(start,end-start+1);
            }
    string longestPalindrome(string s) {
        string f = "";
        for(int i=0;i<s.size();i++)
        {
            string s1 = check(s,i,i);
            string s2 = check(s,i,i+1);
            
            if(s1.size()>f.size())
                    f=s1;
            if(s2.size()>f.size())
                f= s2;
        }
        return f;
    }
};