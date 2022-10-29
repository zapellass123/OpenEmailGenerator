class Solution {
    public int arrangeCoins(int n) {
        if (n== 1) return 1;
       // int i=1;
       //    while((i*(i+1))/2 <= n){ i++;   } 
       // return i-1;
        Double d= new Double(n);
        return (int)(Math.sqrt(1+(8*d))-1)/2;
        
        
  }
}
