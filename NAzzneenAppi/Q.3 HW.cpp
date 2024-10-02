//Q.3 W.A.P. to enter the product quantity and  fix discount  of any product according to owner at purchase time using functions?
//return type...with parameter...
/*#include <iostream>
using namespace std;
int product(int qty)
{
  return qty*500;
}
int main()
{
    int qty;
 cout<<"enter quantity\n";
 cin>>qty;
 cout<<product(qty)+product(qty)/10; //......profit...
}*/


//Q.2 W.A.P. for swapping using function? call by value
/*#include <iostream>
using namespace std;
void swp(int a,int b)
{
int tmp=a;
a=b;
b=tmp;
cout<<"after swapping a="<<a<<"\t";
cout<<"after swapping b="<<b<<"\t";
}
int main()
{int x,y;
cout<<"enter 2 value\n";
cin>>x>>y;
swp(x,y);
}*/



//call by refrence....
/*#include <iostream>
using namespace std;
void swp(int &a,int &b)
{
int tmp=a;
a=b;
b=tmp;

}
int main()
{int a,b;
cout<<"enter 2 value\n";
cin>>a>>b;
swp(a,b);
cout<<"after sawpping is a=" <<a<<"\n";
cout<<"after swapping is b="<<b<<"\n";

}*/

#include <iostream>
using namespace std;
int factorial(int &n)
{
return n * factorial(n - 1);
    }
int main()
{int n;
    cout << "Enter a number to find its factorial: ";
    cin >> n;
    int result = factorial(n);
    cout << "The factorial of "<<n<<"is"<< result <<"\n";
}
