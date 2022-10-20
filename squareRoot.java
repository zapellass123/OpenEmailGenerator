class Solution {
    public int mySqrt(int x) {
        long a=0;
        while (a*a <=x ){
            a +=1;
        }
        return (int)a-1;
        
    }
}
