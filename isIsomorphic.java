class Solution {
    public boolean isIsomorphic(String s, String t) {
//         HashMap<String , Integer> map1 = new HashMap<>();
//         HashMap <String, Integer> map2 = new HashMap<>();
        
//         for(int a=0; a<s.length(); a++){
//             if(map1.containsKey(s.substring(a,a+1))){
//                 map1.put(s.substring(a,a+1), map1.get(s.substring(a,a+1)) +1 ); 
//             }
//             else{  map1.put(s.substring(a,a+1), 0); }
            
//             if(map2.containsKey(t.substring(a,a+1))){
//                 map2.put(t.substring(a,a+1), map2.get(t.substring(a,a+1)) +1 ); 
//             }
//             else{  map2.put(t.substring(a,a+1), 0); }
 
            
//             if(  map2.get(t.substring(a,a+1)).equals( map1.get(s.substring(a,a+1)))){
                
//             }
//             else return false;
//         }
//          return true;
         HashMap <Character , Character> replacement = new HashMap <>();
        HashMap <Character , Boolean> used = new HashMap <>();
        for(int i = 0 ; i < s.length() ; i++) {
            if(replacement.containsKey(s.charAt(i))) {
                if(replacement.get(s.charAt(i)) != t.charAt(i))
                    return false;
            }
            else {
                if(used.containsKey(t.charAt(i)))
                    return false;
                replacement.put(s.charAt(i) , t.charAt(i));
                used.put(t.charAt(i) , true);
            }
        }
        return true;
        
    }
}
