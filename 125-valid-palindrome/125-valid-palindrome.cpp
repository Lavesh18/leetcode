class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z') || s[i]>='0' && s[i]<='9')
                res.push_back(s[i]);
            else if(s[i]>='A' && s[i]<='Z')
                res.push_back(s[i]+32);
            
        }
        string z = res;
        reverse(res.begin(),res.end());
        
        if(z==res)
            return true;
        else
                return false;
    }   
};