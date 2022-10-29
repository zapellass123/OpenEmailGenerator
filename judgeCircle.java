class Solution {
    public boolean judgeCircle(String moves) {
        int l=0; int u=0; int r=0; int d=0;
        for(int a=0; a<moves.length(); a++){
            if(moves.charAt(a) == 'L') l++;
            else if(moves.charAt(a) == 'U') u++;
            else  if(moves.charAt(a) == 'R') r++;
            else  if(moves.charAt(a) == 'D') d++;
        }
        
        if((l==r)  &&  (u == d) )   return true;
        return false;
        
    }
}
