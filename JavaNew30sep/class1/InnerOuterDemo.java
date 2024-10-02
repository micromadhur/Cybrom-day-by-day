class Outer{
    String msg ="hello I am outer";
    class  Inner
    {
        public void print()
        {
            System.out.println(msg);
        }
    }
}
public class InnerOuterDemo
{
    public static void main(String[] args) {  //INNER CLASS
        Outer out = new Outer();
        Outer.Inner in = out.new Inner();

        in.print();
    }
}