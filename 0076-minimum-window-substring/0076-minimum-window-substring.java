class Solution {
    public String minWindow(String s, String t) {
        HashMap<Character,Integer> freq = new HashMap<>();
        int n = s.length();
        int tl = t.length();
        int we = 0;
        int ws = 0;
        int minLen = Integer.MAX_VALUE;
        int si = -1;
        for(int i=0;i<tl;i++)
        {
            char ch = t.charAt(i);
            freq.put(ch,freq.getOrDefault(ch,0)+1);
        }
        int ucc = freq.size();
        
        while(we<n){
            //exp
            char ch = s.charAt(we);
            if(freq.containsKey(ch)){
                freq.put(ch,freq.get(ch)-1);
                if(freq.get(ch)==0)
                {
                    ucc--;
                }
            }

            //shrinking
            while(ucc==0)
            {
                int len = we-ws+1;
                if(len<minLen)
                {

                    minLen = len;
                    si = ws;
                    
                }
                ch = s.charAt(ws);
                if(freq.containsKey(ch))
                {
                    freq.put(ch,freq.get(ch)+1);
                    if(freq.get(ch)>0)
                    {
                        ucc++;
                    }
                }
                ws++;
            }

            we++;
        }

        if(si == -1)
        {
            return "";
        }
        return s.substring(si,si+minLen);
        
    }
}