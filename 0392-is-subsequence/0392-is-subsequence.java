class Solution {
    // public static String[] res;
   
    public boolean isSubsequence(String s, String t) {
       
       int tidx = 0;
       int sidx = 0;

       while(tidx < t.length() && sidx<s.length())
       {
        if(t.charAt(tidx) == s.charAt(sidx))
        {
            tidx++;
            sidx++;
        }
        else
        {
        tidx++;
        }
       }

       return sidx == s.length();
        
    }
}