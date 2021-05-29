class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expected;
        int i,j,count=0;
        for(i=0;i<heights.size();i++)
        {
            
            expected.push_back(heights[i]);
        }
        sort(expected.begin(),expected.end());
        for(i=0;i<expected.size();i++)
        {
            j=i;
            if(expected[i]!=heights[j])
                count++;
        }
        return count;
    }
};


    