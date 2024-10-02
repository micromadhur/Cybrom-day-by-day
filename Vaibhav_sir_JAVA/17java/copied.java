import java.util.Scanner;

class StudentGradeApp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 3; // Number of subjects

        // Create an array to store marks
        double[] marks = new double[n];

        // Input marks for each subject
        for (int i = 0; i < n; i++) {
            System.out.print("Enter the marks for subject " + (i + 1) + ": ");
            marks[i] = sc.nextDouble();
        }

        // Calculate average
        double average = (marks[0] + marks[1] + marks[2]) / n;

        // Determine the grade
        char grade;
        if (average >= 90) {
            grade = 'A';
        } else if (average >= 80) {
            grade = 'B';
        } else if (average >= 70) {
            grade = 'C';
        } else if (average >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        System.out.println("Average Marks: " + average + ", Grade " + grade);
    }
}
