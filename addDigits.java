class Solution {
    public int addDigits(int num) {
 
        while(num >9){
                   int p =0;
            while(num>0){
                p+= num%10;
                num/=10;
            }
            num = p;
        }
        return num; 
    }
}         
