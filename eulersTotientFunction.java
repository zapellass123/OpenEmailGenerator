import java.io.*;

public class eulersTotientFunction {

    public static int totientCalculator(int n){
        int phiN = n;
        for(int p = 2; p*p <= n; p++){
            if(n%p == 0){
                while(n%p == 0){
                    n /= p;
                }
                phiN -= phiN/p;
            }
        } 
        // if n is prime
        if(n > 1){
            phiN -= phiN/n;
        }
        return phiN;
    }
    public static void main(String args[])
    throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the number: ");
        int n = Integer.parseInt(br.readLine());
        System.out.println(totientCalculator(n));
    }
}

 
