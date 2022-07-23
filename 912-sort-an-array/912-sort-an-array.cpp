class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int>ans;
        priority_queue<int>maxh;
        for(int i=0;i<nums.size();i++)
            maxh.push(nums[i]);
        
        while(!maxh.empty())
        {
            ans.push_back(maxh.top());
            maxh.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};