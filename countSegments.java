class Solution {
    public int countSegments(String s) {
        int count = 0;
        int t = s.length()-1;
        int y=0;
        
        if (s.length() == 0) return 0;
        String p = s.strip();
        if (p.length() == 0) return 0;
         
          while(y<p.length()){
              
              if(p.charAt(y) == ' '){
                    count++;
                        while(p.charAt(y) == ' ') {
                            y++;
                        }   
                  y--;
                 }
              y++;
          }

        return count+1;
    }
}
