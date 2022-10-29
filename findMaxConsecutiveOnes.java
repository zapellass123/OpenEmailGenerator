class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        
        int t=0;
        for(int a=0; a<nums.length; a++){
            if(nums[a] == 1){
                 int count=0;
                int b=a;
                while( nums[b] ==1){
                    count++;
                     t= Math.max(t, count);
                    if(b<nums.length-1) b++;
                     else return t;
                }
            }
            
            
        }
        return t;
        
    }
}
