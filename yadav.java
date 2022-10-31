class Solution {
    public String convert(String s, int numRows) {
        	int words=s.length();
	int noCols=0;
	
	while(words>0) {
		words=words-numRows;
		noCols=noCols+1;
		if(words>0) {
			int temp=(numRows-2);
			if(temp>0) {
				noCols=noCols+(numRows-2);
				words=words-temp;
			}
		}
	}

	
	char[][] arr=new char[numRows][noCols];
	int j=0;
	int k=0;
	int even=0;
	for(int i=0;i<noCols;i++) {
		
		if(even==0 && k<s.length()) {
			j=0;
			while(j<arr.length && k<s.length()) {
				arr[j][i]=s.charAt(k);
				k++;
				j++;
			}
			even=1;
		}else {
			if(numRows<=2) {
				j=0;
				while(i<noCols&&j<arr.length && k<s.length()) {
					arr[j][i]=s.charAt(k);
					k++;
					j++;
				}
			}else {
				j=j-2;
				while(i<noCols&&j>0 && k<s.length()) {
					arr[j][i]=s.charAt(k);
					k++;
					j--;
				}
			}
			even=0;
		}
	}
	String str="";
	for(int i=0;i<numRows;i++) {
		for(int l=0;l<noCols;l++) {
			if(arr[i][l]!='\u0000') {
				str=str+arr[i][l];
			}
			
		}
	}
	
	
	return str;
    }
}
