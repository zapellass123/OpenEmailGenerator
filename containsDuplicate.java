class Solution {
    public boolean containsDuplicate(int[] nums) {
        
        HashSet <Integer> has = new HashSet<>();
        for(int a=0; a<nums.length; a++){
            has.add(nums[a]);
        }
        System.out.println(has);
        
        if(nums.length == has.size()) return false;
        return true;
        
    }
}
