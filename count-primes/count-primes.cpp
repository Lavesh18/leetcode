class Solution {
public:
    int countPrimes(int n) {
       vector<int> checkprime(n, 0); 
        int res=0;
        
        int i,j;
        for(i=2;i<n;i++)
        {
            if(checkprime[i]==0){
                res++;
            
                for(j=i+i;j<n;j=j+i){
                    checkprime[j]++;
                }
        }
        }
        return res;
    }
    
};
