class Test_fun
{
    public void test_class() 
    {
        class Hello ///local storage
        // it is use only in rare cases
        {
            void print()
            {
                System.out.println("Hello");
            }
        }
       new Hello().print();
    }
}
public class TestFunction
{
    public static void main(String[] args) {
        new Test_fun().test_class();
    }
}

// 1 Static call
// 2 object call
// 3 method call   and method will destruct first