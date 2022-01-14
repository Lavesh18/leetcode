class Solution {
public:
    vector<int>NSL(vector<int>& heights)
    {
        vector<int>left;
        int n = heights.size();
        
        stack<pair<int,int>>s;
        
        int pseudo = -1;
        
        for(int i=0;i<n;i++)
        {
            if(s.size()==0)
                left.push_back(pseudo);
            else if(s.size()>0 && s.top().first<heights[i])
                left.push_back(s.top().second);
            else if(s.size()>0 && s.top().first>=heights[i])
            {
                while(s.size()>0 && s.top().first>=heights[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                    left.push_back(pseudo);
                else
                    left.push_back(s.top().second);
            }
            s.push({heights[i],i});
        }
        return left;
    }
    vector<int> NSR(vector<int>& heights)
    {
        stack<pair<int,int>>s;
        vector<int>right;
        int pseudo = heights.size();
        
        for(int i=heights.size()-1;i>=0;i--)
        {
            if(s.size()==0)
                right.push_back(pseudo);
            else if(s.size()>0 && s.top().first<heights[i])
                right.push_back(s.top().second);
            else if(s.size()>0 && s.top().first>=heights[i])
            {
                while(s.size()>0 && s.top().first>=heights[i])
                    s.pop();
                if(s.size()==0)
                    right.push_back(pseudo);
                else
                    right.push_back(s.top().second);
            }
            s.push({heights[i],i});
        }
        reverse(right.begin(),right.end());
        return right;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int>left = NSL(heights);
        vector<int>right = NSR(heights);
        int max = 0;
        int n = heights.size();
        int width[n];
        for(int i=0;i<n;i++)
        {
            width[i] = right[i]-left[i]-1;
        }
    int area[n];
        for(int i=0;i<n;i++)
        {
            area[i] = width[i]*heights[i];
            if(area[i]>max)
                max = area[i];
        }
        return max;
        
        
        

    }
};