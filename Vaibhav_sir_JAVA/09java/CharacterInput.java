
import java.util.Scanner;

// taking character input from user using scanner
class CharacterInput{
    public static void main(String[] args) {
        System.out.println("Enter your class section");
        Scanner scanner = new Scanner(System.in);
        //using charAt(intg index) method
        //to get the character from
        //given index
        char section = scanner.next().charAt(0);
        System.out.println("Section = " + section);
    }
}