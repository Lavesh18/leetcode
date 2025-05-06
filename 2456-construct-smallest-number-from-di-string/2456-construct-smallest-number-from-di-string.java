class Solution {
    int n;
    public String smallestNumber(String pattern) {
         n = pattern.length();
        boolean[] used = new boolean[10];
        int[] num = new int[n+1];
        StringBuilder res = new StringBuilder();
        backtrack(pattern,used,0,num,res);
        return res.toString();
    }
    public boolean backtrack(String pattern,boolean[] used, int idx ,int[] num,StringBuilder res)
    {
        if(idx>n)
        {
            for(int i=0;i<num.length;i++)
            {
                res.append(num[i]);
            }
            return true;
        }

        for(int digit=1;digit<=9;digit++)
        {
            if(!used[digit] && (idx == 0 || isValid(num[idx-1],digit,pattern.charAt(idx-1))))
            {
                used[digit] = true;
                num[idx] = digit;
                if(backtrack(pattern,used,idx+1,num,res)){
                    return true;
                }
                 num[idx] = 0;
                used[digit] = false;
               
            }
        } 
        return false;
    }
    public boolean isValid(int lastD,int currD,char condition)
    {
        return (condition =='I'  && lastD<currD ) || (condition == 'D' && lastD>currD);
    }
}