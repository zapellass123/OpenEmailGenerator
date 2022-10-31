class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int l1 = nums1.length;
        int l2 = nums2.length;
        int l3 = l1+l2;
        double median = 0;
        int [] arr  = new int[l3];
         System.arraycopy(nums1, 0, arr, 0, l1);
        System.arraycopy(nums2, 0, arr, l1, l2);
        System.out.println(Arrays.toString(arr));
       Arrays.sort(arr);
        if(l3%2 == 1){median = (double)arr[l3/2]; }
        else if ((l3%2) ==0 ){ median = (double)(arr[l3/2-1] + arr[(l3)/2])/2; }
        return median;
    }
}
