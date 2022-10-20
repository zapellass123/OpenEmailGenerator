class Solution {
    public boolean isPalindrome(String s) {
        boolean indic = true;
        s = s.replaceAll("[^a-zA-Z0-9]", "");
        
        String q= s.toLowerCase();
       int length = q.length();

        for (int a=0; a<length/2; a++){
         if (q.charAt(a) != q.charAt(length-1-a)){
             indic = false;
         }
     }
        return indic;
    }
}
