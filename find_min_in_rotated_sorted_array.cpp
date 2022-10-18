//leetcode important question 
//solved in just log(n) time complixity


 int findMin(vector<int>& nums) {
        int n=nums.size();

        int low=0;
        int high=n-1;

        while(low<=high){
           int mid=low+(high-low)/2;

           if (mid > 0 && nums[mid] < nums[mid - 1]) {
                return nums[mid];
            }
            if (nums[low] <= nums[mid] && nums[mid] > nums[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }

        }
        return nums[low];

    }
