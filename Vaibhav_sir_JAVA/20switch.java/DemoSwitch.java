
import java.time.Month;
import java.util.Scanner;

public class DemoSwitchSession21{
    public static void main(String[] args){
        //finding whether the given month is
        //having 31 or 30 or 29/29 days
        System.out.println("Select the month from the given list");
        System.out.println("1 --> Jan");
        System.out.println("2 --> Feb");
        System.out.println("March");
        System.out.println("April");
        System.out.println("May");
        System.out.println("June");
        System.out.println("July");
        System.out.println("Aug");
        System.out.println("September");
        System.out.println("October");
        System.out.println("November");
        System.out.println("December");
        java.util.Scanner scanner = new Scanner(System.in);
        int Month =scanner.nextInt();
        switch (Month){
            case 1:
                System.out.println("31 days");
                break;
                case 2:
                    System.out.println("28 or 29 days, based on leap year");
                    break;
                    case 3:
                        System.out.println("30 days");
                        break;
                    case 4:
                        System.out.println("31 days");
                        break;
                    case 5:
                        System.out.println("30days");
                        break;
                    case 6:
                        System.out.println("31 days");
                        break;
                    case 7:
                        System.out.println("30 days");
                        break;
                    case 8:
                        System.out.println("31 days");
                        break;
                    case 9:
                        System.out.println("30 days");
                        break;
                    case 10:
                        System.out.println("31 days");
                        break;
                    case 11:
                        System.out.println("30 days");
                        break;
                    case 12:
                        System.out.println("31 days");
                        default:
                            System.out.println("Invaild.month");
        }

    }
}