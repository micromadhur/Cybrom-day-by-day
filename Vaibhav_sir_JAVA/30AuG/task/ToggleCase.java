public class ToggleCase {

    public static void toggleCase(char[] arr) {
        for (int i = 0; i < arr.length; i++) {
            // Check if the character is lowercase
            if (Character.isLowerCase(arr[i])) {
                // Convert to uppercase
                arr[i] = Character.toUpperCase(arr[i]);
            } else if (Character.isUpperCase(arr[i])) {
                // Convert to lowercase
                arr[i] = Character.toLowerCase(arr[i]);
            }
        }
    }

    public static void main(String[] args) {
        char[] charArray = {'a', 'B', 'c', 'D', 'e', 'F'};

        System.out.println("Original array: ");
        System.out.println(charArray);

        // Toggle case
        toggleCase(charArray);

        System.out.println("Toggled case array: ");
        System.out.println(charArray);
    }
}
