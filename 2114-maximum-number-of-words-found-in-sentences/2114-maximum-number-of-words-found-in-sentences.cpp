class Solution {
public:
    int num_of_words(string &s)
    {
        int ans = 0;
        for(auto i:s)
        {
            if(i == ' ')
                ans++;
        }
        return ans+1;
    }
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(auto i:sentences)
        {
            ans = max(ans,num_of_words(i));
            
        }
        return ans;
    }
};