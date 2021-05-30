class Solution {
public:
    double average(vector<int>& salary) {
int sum=0,i,x;
        sort(salary.begin(),salary.end());
           for(i=1;i<salary.size()-1;i++)
           {
               sum=sum+salary[i];
           }
        return sum/((double)salary.size()-2);
    }
};

