class Solution {
    public int majorityElement(int[] nums) {
        
       Arrays.sort(nums);
        int count = 0;
        int max= 0;
        int element =nums[0];
        
        for(int a=0; a<nums.length; a++){
            
            if(nums[a] == element){
                count++;
            }
            else if ( nums[a] != element ){
                if(count > 0){ count--;}
                else{ count = 0; element = nums[a];}
            }
            
        }
         return element;
        
        
    }
}
