class Solution {
    public int searchInsert(int[] nums, int target) {
        int index = 0;
           if (nums[nums.length-1] < target) { index = nums.length; }
        else if (nums[nums.length-1] == target){ index = nums.length-1;}
    
        else {
         for (int  a =0; a< nums.length-1; a++){
          
         if(nums[a] == target){
            index = a;
        }
        else if ((nums[a]< target) && (nums[a+1] > target) ) { index =  a+1;}
             
    }
        }
    return index;
    }
}
