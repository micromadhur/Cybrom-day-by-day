import java.util.Scanner;

public class CharacterCount {
    public static void main(String[] args) {
        // Create a Scanner object to take input
        Scanner scanner = new Scanner(System.in);

        // Input: the string from the user
        System.out.print("Enter a string: ");
        String inputString = scanner.nextLine();

        // Input: the character to count in the string
        System.out.print("Enter a character to count: ");
        char searchChar = scanner.next().charAt(0);

        // Initialize count to 0
        int count = 0;

        // Iterate over the string and count occurrences of the given character
        for (int i = 0; i < inputString.length(); i++) {
            if (inputString.charAt(i) == searchChar) {
                count++;
            }
        }

        // Output the count result
        System.out.println("The character '" + searchChar + "' occurs " + count + " times in the string.");

        // Close the scanner
        scanner.close();
    }
}
