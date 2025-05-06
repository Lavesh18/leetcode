class Solution {
    public int beautifulSubsets(int[] nums, int k) {
        return findSubsets(nums,k,0,new HashMap<>());
    }
    public int findSubsets(int[] nums,int k,int idx,HashMap<Integer,Integer> freq)
    {
        if(idx==nums.length)
        {
            if(freq.size()==0) return 0;
            return 1;
        }
        int pick = 0;
        int ele1 = nums[idx]+k;
        int ele2 = nums[idx]-k;
        if(freq.size() == 0 || (!freq.containsKey(ele1) && !freq.containsKey(ele2)))
        {
            //add
            freq.put(nums[idx],freq.getOrDefault(nums[idx],0)+1);
            //explore
            pick = findSubsets(nums,k,idx+1,freq);
            //backtrack
            freq.put(nums[idx],freq.get(nums[idx])-1);
            if(freq.get(nums[idx])==0)
            {
                freq.remove(nums[idx]);
            }
        }
        int nopick = findSubsets(nums,k,idx+1,freq);

        return pick + nopick;
    }
}