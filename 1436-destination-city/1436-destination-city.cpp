class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
//         int n = paths.size();
//         vector<string>start;
//         vector<string>dest;
//         string res = "";
        
//         for(int i=0;i<n;i++)
//         {
//             start.push_back(paths[i][0]);
//             dest.push_back(paths[i][1]);
            
//         }
        
//         for(int i=0;i<dest.size();i++)
//         {
//             for(int j=0;j<start.size();j++)
//             {
//             if(dest[i] !=start[j] || start[j]!=dest[i])
//                 res = dest[i];
//                 }
//         }
//         return res;
        
        stack<string>s;
        string res;
        s.push(paths[0][1]);
        
        for(int i=0;i<paths.size();i++)
        {
            if(s.top()==paths[i][0])
            {
                s.pop();
                s.push(paths[i][1]);
                i=0;
            }
        }
        res = s.top();
        return res;
    }
};