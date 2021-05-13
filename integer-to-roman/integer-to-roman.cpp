class Solution {
public:
    string intToRoman(int num) {
        int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    string res;
    int i;
    for(i=0;i<13;i++)
    {
        while(num>=numbers[i])
        {
            num=num-numbers[i];
            res=res+romans[i];
            
        }
    }
    return res;
    }
};