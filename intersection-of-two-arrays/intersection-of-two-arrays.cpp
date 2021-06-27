class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       /* set<int>s;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                    s.insert(nums1[i]);
                    
            }
        }
        return s;*/
        vector<int>ans;
        int hash[1001]={0};
        for(int i=0;i<nums1.size();i++)
            hash[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)
        {
            if(hash[nums2[i]])
            {
                ans.push_back(nums2[i]);
                hash[nums2[i]]=0;
            }
        }
        return ans;
    }
};
