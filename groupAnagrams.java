class Solution 
{
    public List<List<String>> groupAnagrams(String[] strs) 
    {
        HashMap<String, List<String>> groups = new HashMap<>();

        for (String s : strs) 
        {
            // [1] compute letter frequencies
            char[] hash = new char[26];
            s.chars().forEachOrdered(ch -> hash[ch-'a'] += 1);
            
            // [2] smart way to obtain a hashable key for a map
            String hashKey = String.valueOf(hash);
            
            // [3] update group
            if (!groups.containsKey(hashKey)) 
                groups.put(hashKey, new ArrayList<>());
            groups.get(hashKey).add(s);
        }
        
        // [4] nice one-liner to extract a list of values from map
        return new ArrayList<>(groups.values());
    }
}
