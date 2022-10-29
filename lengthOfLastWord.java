class Solution {
    public int lengthOfLastWord(String s) {
        int lengt = s.length();
        int count = 0;
        while (lengt>0){
            if (s.charAt(lengt-1) == ' '){
                lengt--;
            }
            else {
                break;
            }
        }
        
        while (lengt>0){
            if ((s.charAt(lengt-1)) != ' '){ count++; lengt--;}
            else { break;}
        }
        
        return count;
    }
}
