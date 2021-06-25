class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>v(image.size());
        for(int i=0;i<image.size();i++)
        {
            for(int j=0;j<image[i].size();j++)
            {
                if(image[i][j]==0)
                    v[i].push_back(1);
                else
                    v[i].push_back(0);
}
            reverse(v[i].begin(),v[i].end());
        }
        return v;
    }
};
