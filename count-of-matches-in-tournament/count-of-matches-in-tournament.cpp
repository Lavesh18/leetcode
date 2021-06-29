class Solution {
public:
     int sum=0;
    int numberOfMatches(int n) {
      /*  if(n==1)
            return 0;
        vector<int>matches;
        int sum=0;
        while(n!=1)
        {
            if(n%2==0)
                matches.push_back(n/2);
            else{
                n=((n-1)/2)+1;
                matches.push_back((n-1)/2);
            }
        }
        for(int i=0;i<matches.size();i++)
        {
            sum=sum+matches[i];
        }
        return sum;
        */
       
        if(n==1)
            return 0;
        if(n%2==0)
        {
            sum=sum+n/2;
            numberOfMatches(n/2);
        }
        else
        {
             sum=sum+(n-1)/2;
            numberOfMatches(((n-1)/2)+1);
        }
        return sum;
    }
};