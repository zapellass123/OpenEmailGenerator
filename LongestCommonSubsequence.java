// Given two strings, determine the length of the longest common subsequence which is common in both the strings

public class LongestCommonSubsequence{
	public static void main(String[] args) {
	String firstString= "ACEDBFD";
	String secondString= "AECDF";
	int length_firstString = firstString.length();
	int length_secondString = secondString.length();
	System.out.println("Length of Longest Common Subsequence : "+ longestCommonSubsequence(firstString.toCharArray(), secondString.toCharArray(), length_firstString, length_secondString));
	}
	
	static int longestCommonSubsequence(char[] firstString, char[] secondString, int length_firstString, int length_secondString){
	    if(length_firstString<=0 || length_secondString<=0)
	        return 0;
	   if(firstString[length_firstString-1] == secondString[length_secondString-1]){
	       return 1 + longestCommonSubsequence(firstString, secondString, length_firstString-1, length_secondString-1);
	   }
	   
	   return Math.max(
	       longestCommonSubsequence(firstString, secondString, length_firstString, length_secondString-1),
	       longestCommonSubsequence(firstString,secondString, length_firstString-1,length_secondString)
	       );
	}
}
