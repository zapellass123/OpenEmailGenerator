//It is a hard level problem at leetcode.It is also called as one of the best example for the Binary search .It improves the binary search algorithm in our mind perfectly.
//this is my effiecient solution for this problem.
//please give me more chance to contribute more so that we could help other in a great way.

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        double ans;
    int m = nums1.size();
    int n = nums2.size();
    if(m>n) // Always make the first array with smaller or equal length. We have to apply binary search on smaller array.
    {
        vector<int> temp;
        temp = nums1;
        nums1 = nums2;
        nums2 = temp;
    }
        
    int n1 = nums1.size();
    int n2 = nums2.size();
    int start = 0, end = n1;
    while(start<=end)
    {
        int i1 = (start+end)/2;
        int i2 = (n1+n2+1)/2 - i1;
		
        // To remove the corner cases
        int min1 = (i1 == n1)?INT_MAX:nums1[i1];
        int max1 = (i1 == 0)?INT_MIN:nums1[i1-1];
        int min2 = (i2 == n2)?INT_MAX:nums2[i2];
        int max2 = (i2 == 0)?INT_MIN:nums2[i2-1];
        
        if(min1>=max2 && min2>=max1)
        {
            if((n1+n2)%2==0)
                ans = double(min(min1, min2)+max(max1, max2))/2;
            else
                ans = double(max(max1, max2));
            return ans;
        }
        else if(max1>min2) // Move left of side nums1.
            end = i1-1;
        else // else if (max2>min1) Move rigth side of nums1.
            start = i1+1;
    }
    return ans;
}
};
