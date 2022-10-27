class Solution {
    public int fib(int m) {
        if ( m==0 || m==1){
            if (n==0) return 0;
            else return 1;
        }
         return  fib(m-1) + fib(m-2); 
    }
}
