class Solution {
    public double myPow(double x, int n) {
        

        
        double temp=1,flag=1;
        if(n>=0){
        while(n>0){
            if(n%2!=0){
                temp=temp*x;
                n--;
            }
            x=x*x;
            n=n/2;
        }
        return temp;
        }
        else{
            n=-n;
            while(n>0){
            if(n%2!=0){
                temp=temp*(1/x);
                
                n--;
            }
            x=x*x;
            n=n/2;
        }
            return temp;
        }
        
    }
}

