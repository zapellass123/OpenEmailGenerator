class Solution {
    public String longestCommonPrefix(String[] strs) {
        int  minlength = 201;
        
        for(int a=0;a <strs.length;a++){
            String s = strs[a];
            minlength = Math.min(minlength, s.length());
        }
        // System.out.println(minlength);
         
                String st = "";
                int count = 0;
           while (count<= minlength){
            for (int b=0; b<strs.length; b++){
                if(count< minlength){
                    char tt =strs[0].charAt(count);
                    if(strs[b].charAt(count) != tt){
                        st = strs[0].substring(0, count);
                        System.out.println(st);
                        return st;
                    }    
                     
                     }
                 else if(count == minlength){ 
                     System.out.println(count);
                     System.out.println(minlength);
                     return st = strs[0].substring(0, count);
                   }
                 
                
              }
               // System.out.println(count);
               count++;
           }
            
        
        return st;
    }
}
