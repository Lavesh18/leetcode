class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;i++)
        {
            int count = 0;
            int num=i;
            while(num)
            {
                if(num&1)
                    count++;
                num=num>>1;
            }
            res.push_back(count);
        }
        return res;
    }
};