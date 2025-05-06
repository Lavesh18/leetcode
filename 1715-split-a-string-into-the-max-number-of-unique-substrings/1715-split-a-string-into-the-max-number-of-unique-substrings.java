class Solution {
    int maxCount = 0;
    public int maxUniqueSplit(String s) {
        HashSet<String> set = new HashSet<>();
        backTrack(s,set,0);
        return maxCount;
    }
    public void backTrack(String s ,HashSet<String> set,int idx )
    {
        int n = s.length();

        if(idx==n)
        {
            maxCount = Math.max(maxCount,set.size());
            return;
        }
        for(int i=idx;i<n;i++)
        {
            String sub = s.substring(idx,i+1);
             if(!set.contains(sub))
             {
                set.add(sub);
                backTrack(s,set,i+1);
                set.remove(sub);
             }
        }
       
    }
}