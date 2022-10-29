class Solution {
    public int removeElement(int[] nums, int val) {
        
        
        int bb=0;
        int  lengthnum = nums.length-1;
        
        for (int z=0; z<nums.length; z++){
            if (nums[z] == val){
               
                nums[z] = 55;
                
                bb++;
               
                
              
            }
            
           
            
            
        }
        Arrays.sort(nums);
        
         return nums.length - bb;
        
    }
}
