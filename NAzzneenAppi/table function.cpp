//Q.1 W.A.P. to display table of any number using function?
/*#include <iostream>
using namespace std;
void table(int n) //.......second print this site...
{cout << " Table \n";
    for (int i = 1; i <= 10; i++)
     {
cout << n * i <<"\n";
    }
}
int main() //..........first print this site....
{int n;
    cout << "Enter a number:\n ";
    cin >> n;
    table(n);
}*/

//Q.2 W.A.P. for swapping using function?
/*#include <iostream>
using namespace std;
void swapping(int &a, int &b)
{
a=a+b;
b=a-b;
a=a-b;
}
int main(){
int a,b;
cout<<"enter first number\n";
cin>>a;
cout<<"enter second number\n";
cin>>b;
cout<<"before swapping a="<<a<<"\n";
cout<<"before swapping b="<<b<<"\n";
swapping(a,b);
cout<<"after swapping a="<<a<<"\n";
cout<<"after swapping b="<<b<<"\n";

}*/

//Q.3 W.A.P. to enter the product quantity and  fix discount  of any product according to owner at purchase time using functions?
  #include <iostream>
using namespace std;
int quantity ()
{
int q;
cout<<"enter the product quantity:";
cin>>q;
return q;
}
double discount()
{double d;
cout<<"enter the product discount in percentage:";
cin>>d;
return d;
}
double totalPrice(double p, int q, double d )
{double price = p*q;
double amount = (d/100)* price;
return price-amount;
}
int main()
{double p;
cout<<"enter the price of the product:";
cin>>p;
int q = quantity();
double d = discount();
double finalPrice = totalPrice(p,q,d);
cout<<"final amount after discount"<<finalPrice<<"\n";

}


//Q.4 W.A.P to find greater number between two using function?

 /* #include <iostream>
using namespace std;
int greaters(int num1, int num2)
 {
return (num1 > num2) ? num1 : num2;
}
int main()
{int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int maxnum= greaters(num1, num2);
    cout << "The greater number is=" << maxnum;
}*/



//Q.5 W.A.P. to display the factorial of any number using function?

/*#include <iostream>
using namespace std;
int factorial(int n)
 {
if (n == 0 || n == 1)
    {
return 1;
    }
else
    {
return n * factorial(n - 1);
    }
}
int main()
{int number;
    cout << "Enter a number to find its factorial: ";
    cin >> number;
    int result = factorial(number);
    cout << "The factorial of " << number << " is " << result << endl;
}*/
