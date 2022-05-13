class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // vector<int>change;
        // int maax=0,miin=0;
        // for(int i=0;i<stones.size();i++)
        // {
        //     sort(stones.begin(),stones.end());
        //     diff = stones[i-1]-stones[i-2];
        
        priority_queue<int>q;
        
        for(int i=0;i<stones.size();i++)
                q.push(stones[i]);
        while(q.size()>1)
        {
            int first = q.top();
            q.pop();
            int second = q.top();
            q.pop();
            
            if(first!=second)
                q.push(first-second);
            
        }
        if(!q.empty())
            return q.top();
        else
                return 0;
            
        }
    
};