import java.util.Scanner;  // needed for Scanner

public class Test 
{
    // Create a single shared Scanner for keyboard input
    private static Scanner scanner = new Scanner( System.in );

    public static void main(String args[])
    {
        // Read a line of text from the user.
        String input = scanner.nextLine();

        int number = Integer.parseInt( input );  // converts a String into an int value

        while (number != 42)
        {
            System.out.println(number);
            input = scanner.nextLine();
            number = Integer.parseInt(input);
        }
    }
}
