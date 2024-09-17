class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String,List<String>> map = new HashMap<>();


        for(String c:strs)
        {
            char[] charArray = c.toCharArray();
            Arrays.sort(charArray);

            String mapKey = new String(charArray);

            if(!map.containsKey(mapKey))
            {
                map.put(mapKey,new ArrayList<>());
            }
            map.get(mapKey).add(c);
        }
        return new ArrayList<>(map.values());
    }
}