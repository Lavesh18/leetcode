class Solution {
    public int longestConsecutive(int[] nums) {
        int longLength = 0;
        HashMap<Integer,Boolean> map = new HashMap<>();

        for(int num : nums)
        {
            map.put(num,false);
        }

        for(int num : nums)
        {
            int curr = 1;

            int nextNum = num+1;

            while(map.containsKey(nextNum) && map.get(nextNum)==false)
            {
                curr++;
                map.put(nextNum,true);
                nextNum++;
            }

            int prevNum = num-1;
            while(map.containsKey(prevNum) && map.get(prevNum) == false)
            {
                curr++;
                map.put(prevNum,true);
                prevNum--;
            }

            longLength = Math.max(longLength,curr);

        }

        return longLength;
    }
}