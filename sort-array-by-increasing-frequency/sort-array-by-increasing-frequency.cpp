class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
//         unordered_map<int,int>mp;
//         vector<int>res;
        
//         for(int i=0;i<nums.size();i++)
//             mp[nums[i]]++;
//         for(auto i=mp.begin();i!=mp.end();i++)
//         {
//             minh.push({i->second,i->first});
//         }
        
//         while(minh.size()>0)
//         {
//             int freq = minh.top().first;
//             int ele = minh.top().second;
            
//             for(int i=1;i<=freq;i++){
//                 res.push_back(ele);
//                 minh.pop();
//             }
            
            
//         }
//         return res;
        class compare_fun
    {    
        public:
        // Since as you can see we have to sort decreasing order if frequency of two elements
        // is same, so we need *Custom Comparator Function* which is this \U0001f447
        bool operator()(pair<int, int> p1, pair<int, int> p2) 
        {    
            if(p1.first==p2.first)
                return p1.second < p2.second;
            return p1.first > p2.first;
        }
    };
       unordered_map<int,int>mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare_fun>minh;
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++)
                mp[nums[i]]++;
        for(auto it = mp.begin();it!=mp.end();it++)
            minh.push({it->second,it->first});
        while(minh.size()>0)
        {
            for(int i=0;i<minh.top().first;i++)
                ans.push_back(minh.top().second);
            minh.pop();
                
                
        }
        return ans;
    }
    
};