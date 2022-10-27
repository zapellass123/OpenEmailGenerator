/* A child is climbing up the staircase with n steps and hops either 1 step or 2 steps at a time.
   Count the number of possible ways the child can climb up the stairs.
*/

public class StairCaseProblem{
	public static void main(String[] args) {
		int numberOfStairs = 5;
		int numberOfWays = climbUp(numberOfStairs);
		System.out.println("Number of ways to Climb up the stairs : "+ numberOfWays);
	}

	static int climbUp(int numberOfStairs){
	    int first = 1, second = 1, sum =0;

	    for(int i =2; i<= numberOfStairs; i++){
	        sum = first + second;
	        first = second;
	        second = sum;
	    }
	    return sum;
	}
}
