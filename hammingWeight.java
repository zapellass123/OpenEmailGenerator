public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int z= 32;
        int count = 0;
        int b = 1;
        while(z>0){
            if ((n&b) == b){ count++;}
            z--;
            b= b<<1;
        }
        return count;
    }
}
