class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int i,j;
        vector<int>pos;
        vector<int>ans;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==c)
                pos.push_back(i);
                
        }
        for(i=0;i<s.size();i++)
        {
            int mind=INT_MAX;
            for(j=0;j<pos.size();j++)
            {
                mind=min(mind,abs(i-pos[j]));
            }
            ans.push_back(mind);
        }
        return ans;
    }
};