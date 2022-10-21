/**
 *
 * The program will display the longest running random dice toss after a user input on the number of dice rolled.
 */
import java.util.Scanner;
import java.util.Random;

public class DiceRoll {
    public static int inputnum = 0;
    public static int chosen = 0;

    public static void checkInput() {
        Scanner input = new Scanner(System.in);
        System.out.println("Input the number of dice rolls you want. I will find the longest running repeated rolls.");
        while (true) {
            System.out.println("Input here: ");
            String done = input.nextLine();
            try {
                chosen = Integer.parseInt(done);
                if (chosen > 30 || chosen < 10) {
                    System.out.println("Must be between 10 and 30, inclusive. Try again!");
                }
                else {
                    break;
                }
            }
            catch (NumberFormatException e) {
                System.out.println("Not a valid input. Try again.");
            }
        }

    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        checkInput();
        boolean restart = true;
        while (restart) {
        int[] myArray = new int[chosen];
        int previous = 0;
        int count = 0;
        int ofindex = 0;
        for (int i = 0; i < myArray.length; i++) {
            Random r = new Random();
            int temp = r.nextInt(6) + 1;
            myArray[i] = temp;
            if (i == 0) {
                previous = myArray[i];  
            }
            if (previous == temp) {
                count = count + 1;
            }
            if (count == 1) {
                ofindex = i;
            }
            previous = myArray[i];
        }
        for (int j = 0; j < myArray.length; j++) {
            if (count == 1) {
                System.out.print("No repeats. Here's the myArray: ");
                for (int l = 0; l < myArray.length; l++) {
                    System.out.print(myArray[l] + " ");
                }
                j = myArray.length;
                break;
            }
            if (j == ofindex) {
                System.out.print("[ " + myArray[j] + " ");
                for (int k = 0; k < count-1; k++) {
                    System.out.print(myArray[j] + " ");
                }
                System.out.print("] ");
                j = j + count-1;
            }
            else {
                System.out.print(myArray[j] + " ");
            }
        }
        System.out.println("\nDo it again? Type 'y' for yes or another key for no.");
        String next = input.nextLine();
        if (next.equals("y")) {
            restart = true;
            checkInput();
        }
        else {
            System.out.println("Ended program.");
            break;
        }
    }

    }
}
