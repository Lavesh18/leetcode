class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int i,j;
        int sumalice=0,sumbob=0;
        for(i=0;i<aliceSizes.size();i++)
        {
            sumalice=sumalice+aliceSizes[i];
        }
        for(j=0;j<bobSizes.size();j++)
        {
            sumbob=sumbob+bobSizes[j];
        }
        int n=(sumalice-sumbob)/2;
        set<int>b;
        for(int i=0;i<bobSizes.size();i++)
            b.insert(bobSizes[i]+n);
        for(int i=0;i<aliceSizes.size();i++)
        {
            if(b.find(aliceSizes[i])!=b.end())
                return {aliceSizes[i],aliceSizes[i]-n};
        }
        return {};
    }
};
