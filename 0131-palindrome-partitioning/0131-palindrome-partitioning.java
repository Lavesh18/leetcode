class Solution {
    public List<List<String>> partition(String s) {
        List<List<String>> res = new ArrayList<>();
        List<String> sublist = new ArrayList<>();

        int n = s.length();
        recur(s,0,n,res,sublist);
        return res;
    }

    public boolean isPallindrome(String s , int start, int end)
    {
        while(start<end)
        {
            if(s.charAt(start)!=s.charAt(end))
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    public void recur(String s , int pi,int n,List<List<String>> res,List<String> sublist)
    {
        // base
        if(pi==n)
        {
            res.add(new ArrayList<>(sublist));
            return;
        }
        //explore poss
        for(int end = pi;end<n;end++)
        {
            if(isPallindrome(s,pi,end))
            {
                //add
                //backtrack
                //remove
                sublist.add(s.substring(pi,end+1));
                recur(s,end+1,n,res,sublist);
                sublist.remove(sublist.size()-1);
            }
        }


    }
}