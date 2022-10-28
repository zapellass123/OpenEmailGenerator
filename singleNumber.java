class Solution {
    public int singleNumber(int[] nums) {
        int p = 0;
        Set <Integer> has = new HashSet<Integer>();
        for(int i=0; i<nums.length; i++){
            if(has.contains(nums[i])){
                has.remove(nums[i]);
            }
            else {
                has.add(nums[i]);
            }
        }
       for (int j=0; j<nums.length; j++){
           if (has.contains(nums[j])){
               p = nums[j];
           }
       }
        return p;
        
    }
}
