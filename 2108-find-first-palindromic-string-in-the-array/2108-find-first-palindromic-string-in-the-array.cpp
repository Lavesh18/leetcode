class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        string check = "";
        for(int i=0;i<n;i++)
        {
            check = words[i];
             reverse(check.begin(),check.end());
            
            if(check == words[i])
                return check;
        }
        return "";
    }
};