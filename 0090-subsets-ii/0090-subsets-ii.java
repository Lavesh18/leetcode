class Solution {
    public static void getSubsets(int[] nums,int idx,List<List<Integer>> ans , List<Integer> out,HashSet<List<Integer>> set)
    {
        //base case
        if(idx >= nums.length)
        {
            if(set.contains(new ArrayList<>(out)))
            {
                return;
            }
            ans.add(new ArrayList<>(out));
            set.add(new ArrayList<>(out));
            return ;
        }

        int curr = nums[idx];

        //now for duplicates 
        out.add(curr);
        getSubsets(nums,idx+1,ans,out,set); //accept
        out.remove(out.size() - 1); 
        getSubsets(nums,idx+1,ans,new ArrayList<>(out),set); //not accept
        

    }
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
  HashSet<List<Integer>> set = new HashSet<>();

         List<List<Integer>> ans = new ArrayList<>();
         List<Integer> out = new ArrayList<>();

         getSubsets(nums,0,ans,out,set);
         return ans;
    }
}