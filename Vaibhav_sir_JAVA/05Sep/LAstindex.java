import java.util.Scanner;

public class LastIndexOfCharacter {
    public static void main(String[] args) {
        // Create a Scanner object to take input
        Scanner scanner = new Scanner(System.in);

        // Input: the string from the user
        System.out.print("Enter a string: ");
        String inputString = scanner.nextLine();

        // Input: the character to find the last index of
        System.out.print("Enter a character to find the last index of: ");
        char searchChar = scanner.next().charAt(0);

        // Find the last index of the given character in the string
        int lastIndex = inputString.lastIndexOf(searchChar);

        // Output the result
        if (lastIndex != -1) {
            System.out.println("The last occurrence of '" + searchChar + "' is at index: " + lastIndex);
        } else {
            System.out.println("Character '" + searchChar + "' not found in the string.");
        }

        // Close the scanner
        scanner.close();
    }
}
