class Solution {
public int missingNumber(int[] nums) {
int ans =0;
int n= nums.length;
for(int i=0;i<nums.length;i++){
ans ^= (nums[i]^i);
}
ans ^=(n);
return ans;
}
}
