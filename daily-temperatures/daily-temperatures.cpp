class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>s;
        vector<int>ans;
        int n = temperatures.size();
        //NGR
        for(int i=n-1;i>=0;i--)
        {
            if(s.size()==0)
                ans.push_back(0);
            else if(s.size()>0 && s.top().first>temperatures[i])
                ans.push_back(s.top().second);
            else if(s.size()>0 && s.top().first<=temperatures[i])
            {
                while(s.size()>0 && s.top().first<=temperatures[i])
                    s.pop();
                if(s.size()==0)
                    ans.push_back(0);
                else
                    ans.push_back(s.top().second);
            }
            s.push({temperatures[i],i});
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            ans[i] = ans[i]-i;
            if(ans[i]<0)
                ans[i]=0;
        }
        return ans;
    }
};