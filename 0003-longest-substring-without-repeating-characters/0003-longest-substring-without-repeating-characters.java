class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character,Integer> map = new HashMap<>();

        int start = 0;
        int end = 0;

        int n = s.length();
        int maxLen = 0;
        while(end<n)
        {char currentChar = s.charAt(end);
            int len = 0;
            if(map.containsKey(currentChar) && map.get(currentChar) >= start )
            {
                
                start = map.get(currentChar)+1;
            }
            len = end - start + 1;
            maxLen = Math.max(len,maxLen);

            map.put(currentChar,end);

            end++;
        }

        return maxLen;


    }
}