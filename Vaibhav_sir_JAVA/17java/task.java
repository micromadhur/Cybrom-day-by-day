// w.ap to exp marks of three subject ohf the user based on the condition print the grade of the user greade scroe
//following a it the percentage is above 90
//garede b is 80
//gra c is 70
//gra d is 60  above  no grade for other all other per print not allocted prommging step use proper classes and names meaning full  spacing 


import java.util.Scanner;

class StudentThreeSubjectMarks{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your Physics marks :");
        double Physics;
        System.out.println("Enter your Chemistry marks :");
        double Chemistry;
        System.out.println("Enter your Mathematic marks :");
        double Mathematics;
        // double[] marks = new double[n];
        double average = (marks[0] + marks[1] + marks[2]);

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
