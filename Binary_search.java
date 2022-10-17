public class Binary_search {
    public static void main(String[] args) {
        int[] arr = {-12, -10, 2, 3, 4, 5, 7, 9, 10, 23, 45, 67};
        int target = 67;
        System.out.println(binarySearch(arr,target));
    }
    static int binarySearch(int[] arr, int target){
        int start = 0;
        int end = arr.length-1;

        while(start <= end){

            int mid = start + (end - start)/2;

            if( arr[mid] > target){
                end = mid-1;
            }
            else if(arr[mid] < target){
                start = mid+1;

            }else{
                return mid;
            }

        }
        return -1;
    }
}
