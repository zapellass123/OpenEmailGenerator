class Solution {
    Boolean dp[][];
    public boolean isMatch(String s, String p) {
        int m = p.length();
        int n = s.length();
        
        dp = new Boolean[m][n];
        
        return is_match(m-1,n-1,p,s);
    }
    
    private boolean is_match(int m,int n,String p,String s){
        
        //Base Case
        //if m and n both are 0 i.e strings are matching
        if (m<0 && n<0) return true;
        
        // if n has some character but m is empty
        if (m<0 && n>=0) return false;
        
        // if m has some character but n is empty
        
        if (n<0 && m>=0) {
            /*
                if str = "" && pattern = "***" then return true;
                    because we can neglect the * also
                else str = ""  && pattern = "sd**" return false;
                    because after neglecting the * pattern has some more character
            
            */
            for (int i=0;i<=m;i++){
                if (p.charAt(i) != '*') return false;
            }
            return true;
        }
        
        //Memorisation
        if (dp[m][n] != null) return dp[m][n];
        
        //if both the character is equal || patern[m] == ?
        if (p.charAt(m) == s.charAt(n) || p.charAt(m) == '?'){
            return dp[m][n] = is_match(m-1,n-1,p,s);
        }
        
        // if p has '*'
        if (p.charAt(m) == '*'){
            return dp[m][n] = is_match(m-1,n,p,s) || is_match(m,n-1,p,s);
        }
        // if both the character is not equal
        return false;
            
    }
}
