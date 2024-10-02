

final class Animal //final is a keyword means final is final constant
{
    void speak()
    {
        System.err.println("Animal speaks");
    }
}
public class TestDemo
{
    public static void main(String[] args)
    {
        Animal dog = new Animal()  ///Anonmious class
        {
            void speak()
            {
                System.out  .println("Dogs bark");
            }
        };
        dog.speak();
    }
}