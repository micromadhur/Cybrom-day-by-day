
import javax.swing.JOptionPane;

class Employee
{
    // Attributes
    String name;
    String addr;
    String email;
    double salary;

    //method
    void setDetails()
    {
        name = JOptionPane.showInputDialog("Enter employee name");
        addr = JOptionPane.showInputDialog("Enter employee addr");
        email = JOptionPane.showInputDialog("Enter employee email");
        salary = Double.parseDouble(JOptionPane.showInputDialog("Enter employeee salary"));
    }
    void getDetails()
    {
        JOptionPane.showMessageDialog(null, "Employee name"+" "+name);
        JOptionPane.showMessageDialog(null, "Employee address"+" "+addr);
        JOptionPane.showMessageDialog(null, "Employee email"+" "+email);
        JOptionPane.showMessageDialog(null, "Employee salary"+" "+salary);
    }
}
public class TestEmployee
{
    public static void main(String[] args) {
        Employee emp = new Employee();
        emp.setDetails();
        emp.getDetails();
    }

}