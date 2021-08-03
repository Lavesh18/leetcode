class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int,pair<int,int>>>maxh;
        vector<vector<int>>res;
        for(int i=0;i<points.size();i++)
        {
            int x = points[i][0];
            int y = points[i][1];
            int d = x*x+y*y;
            maxh.push({d,{x,y}});
            if(maxh.size()>k)
                maxh.pop();
        }
        while(maxh.size()>0)
        {
            res.push_back({maxh.top().second.first,maxh.top().second.second});
            maxh.pop();
        }
        return res;
    }
};