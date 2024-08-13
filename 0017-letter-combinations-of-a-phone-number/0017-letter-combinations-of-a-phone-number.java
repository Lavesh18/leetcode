class Solution {
    public static String[] keypad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    public static void combo(String digits , int idx , String combo,List<String> ans)
    {
        
        //base case
        if(idx == digits.length())
        {
            ans.add(combo);
            return;
        }
        char curr = digits.charAt(idx);
        String mapping = keypad[curr-'0'];

        for(int i=0;i<mapping.length();i++)
        {
            combo(digits,idx+1,combo+mapping.charAt(i),ans);
        }
        
    }
    public List<String> letterCombinations(String digits) {
      List<String> ans = new ArrayList<>();
    if(digits == null || digits.length()==0)
    {
        return ans;
    }
      combo(digits,0,"",ans);
      return ans;
    }
}