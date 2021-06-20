class Solution {
public:
    int sum(int num)
    {
        int sum=0;
        while(num)
        {
            sum=sum+num%10;
            num=num/10;
        }
        return sum;
    }
    int countBalls(int lowLimit, int highLimit) {
        
        int freq[100]={0};
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int no=sum(i);
            freq[no]++;
        }
        return *max_element(freq,freq+100);
    }
};

