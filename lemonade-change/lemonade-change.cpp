class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,tens=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
                five++;
            if(bills[i]==10)
            {
                tens++;
                if(five>0)
                    five--;
                else
                    return false;
            }
            if(bills[i]==20)
            {
                if(five>0 && tens>0)
                {
                    five--;
                    tens--;
                }
                else if(five>=3)
                    five=five-3;
                else 
                    return false;
            }
        }
        return true;
    }
};
