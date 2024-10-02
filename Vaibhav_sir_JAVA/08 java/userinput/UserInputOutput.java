import java.util.Scanner;
//for taking user input we will use library
//class Scanner, which is coming from package
//java.util
//To add this in our program, we will use import
//statement. importr statement are placed above class
//declaration
class UserInputOutput{
    public static void main(String[] args) {
        //step 3
        int number1;
        double number2;
        //step 4 Scanner class object declare and initialize
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your name");
        String name = scanner.nextLine();
        //next()
        //nextLine();
        System.out.println("Name " + name);
    }
}