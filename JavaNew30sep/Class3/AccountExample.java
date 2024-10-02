class Account
{
    private double balance;
    public double  getBalance()
    {
        return balance;
    }
    public void setBalance(double balance)
    {
        this.balance = balance;
    }
}
public class AccountExample
{
    public static void main(String[] str)
    {
        Account ac =new Account();
        ac.setBalance(45600);
        System.out.println(ac.getBalance());

    }
}