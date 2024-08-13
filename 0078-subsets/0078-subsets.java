class Solution {
    public static void getSubsets(int[] nums,int idx,List<List<Integer>> ans , List<Integer> out)
    {
        //base case
        if(idx == nums.length)
        {
            ans.add(new ArrayList<>(out));
            return ;
        }

        int curr = nums[idx];
        out.add(curr);
        getSubsets(nums,idx+1,ans,out); //accept
        out.remove(out.size() - 1); // backtracking
        getSubsets(nums,idx+1,ans,out); // not acccept

    }
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
         List<Integer> out = new ArrayList<>();

         getSubsets(nums,0,ans,out);
         return ans;

    }
}