//Given two strings, determine the length of the longest common substring which is common in both strings.

public class LongestCommonSubstring{
  public static void main(String[] args){
   String firstStr = "ProgrammingLanguage";
    String secondStr = "Language";
    int lenFirstStr = firstStr.length();
    int lenSecondStr = secondStr.length();
    int length = longestCommonSubstring(firstStr.toCharArray(), secondStr.toCharArray(), lenFirstStr, lenSecondStr, 0);
    System.out.println("Length of longest common substring: " + length);
  }
  
  public static int longestCommonSubstring(char[] firstStr, char[] secondStr, int lenFirstStr, int lenSecondStr, int count){
    if(lenFirstStr <= 0 || lenSecondStr <= 0) 
      return count;
    
    int lcsCount = count;
    if(firstStr[lenFirstStr - 1] == secondStr[lenSecondStr - 1]){
      lcsCount = longestCommonSubstring(firstStr, secondStr, lenFirstStr - 1, lenSecondStr - 1, count + 1);
    }
    int lcsCount1 = longestCommonSubstring(firstStr, secondStr, lenFirstStr, lenSecondStr - 1, 0);
    int lcsCount2 = longestCommonSubstring(firstStr, secondStr, lenFirstStr - 1, lenSecondStr, 0);
    return Math.max(lcsCount, Math.max(lcsCount1,lcsCount2));
  }
}
