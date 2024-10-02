import java.util.Scanner;

public class CharacterSearch {
    public static void main(String[] args) {
        // Create a Scanner object to take input
        Scanner scanner = new Scanner(System.in);

        // Input: the string from the user
        System.out.print("Enter a string: ");
        String inputString = scanner.nextLine();

        // Input: the character to search from the user
        System.out.print("Enter a character to search: ");
        char searchChar = scanner.next().charAt(0);
        boolean isFound = false;
        for(int i= 0; i<inputString.length();i++){
            if(searchChar == inputString.charAt(i)){
                isFound =true;
                break;
            }
        }
        // Check if the character is present in the string
        if (isFound) {
            System.out.println("Found");
        } else {
            System.out.println("Not Found");
        }
    }
}
