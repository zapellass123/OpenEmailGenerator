class Solution {
    public double findMaxAverage(int[] nums, int k) {
        
        int [] arr = new int[nums.length];
        arr[0] = nums[0];
        double sum = 0;
        for(int a=1;a<nums.length; a++){
            arr[a] = arr[a-1] + nums[a];
        }
         double avg = ((arr[k-1])*1.0)/k;
        for(int i=k; i<nums.length; i++){
           avg = Math.max(avg, (arr[i]-arr[i-k])*1.0/k);
              
        }
           return avg;
    }
}
