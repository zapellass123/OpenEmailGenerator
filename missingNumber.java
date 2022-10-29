class Solution {
    public int missingNumber(int[] nums) {
        Arrays.sort(nums);
        int number = 0;
        
        for(int a=0; a<nums.length; a++){
            if(nums[a] == number) { number++;}
        }
        return  number;
        
        
        
    }
}
