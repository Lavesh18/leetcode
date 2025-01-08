class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
       if(ransomNote.length()>magazine.length())
       {
        return false;
       } 

       int charArray[] = new int[26];

       for(char c: magazine.toCharArray())
       {
        charArray[c-'a']++;
       }

       for(char c : ransomNote.toCharArray())
       {
            if(charArray[c-'a'] == 0)
            {
                return false;
            } 

            charArray[c-'a']--;
       }


       return true;
    }
}