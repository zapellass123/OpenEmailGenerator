class Solution {
    public boolean isPalindrome(int x) {
        
        int r =0;
        int z =x;
        if(x>=0){
        while(x!=0){
            
            int remi = x%10;
            x=x/10;
            r=r*10 + remi;
        }
        
        if (r==z){
            return true;
        }
        else return false;
        }
        else
            return false;
        
    }
}
