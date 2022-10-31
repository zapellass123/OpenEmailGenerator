public String convert(String s, int numRows) {         
    //check length Condition to prevent null Arithmatic exception in loop
    if(numRows==1){
        return s;
    }
    
    StringBuilder sb= new StringBuilder();
    char[] charArray=s.toCharArray();
    boolean odd=false;
    //Looping Vertically
    for(int i=0;i<numRows;i++){
        odd=true;
        //while looping vertically we can observe that no of characters in top and low level is same and for all mid level it is some other value which is same for them
        for(int j=i;j<s.length();){
            sb.append(charArray[j]);
            if(i==0 || i==numRows-1)// If Condition when we will loop through first and last row
                 j+=(numRows*2-2); 
            else{// Else condition when we are passing through middle rows
                if(odd){// When we need the next character from the vertical column
                    j+=(((numRows-i-1)*2));
                    odd=false;
                }else{// When we need the next character from the diagonal column
                   j+=(2*i);
                   odd=true;
                }
            }           
            if(j>s.length()){
                break;
            }
        }
    }
    return sb.toString();
}
