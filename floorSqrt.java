class Solution
{
     long floorSqrt(long x)
	 {
		// Your code here
		long l=1,h=x,ans=1;
		while(l<=h){
		    long mid=(l+h)/2;
		    if(mid*mid==x)
		    return mid;
		    else if(mid*mid<x){
		        ans=mid;
		        l=mid+1;
		    }
		    else
		    h=mid-1;
		}
		return ans;
	 }
}
