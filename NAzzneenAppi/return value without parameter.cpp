  //....return & without parameter type function.............
  /*#include <iostream>
  using namespace std;
int increament()
  {
  return 1000;
  }

int main()
  {
 int r;    // store karne ke liye............
 r=increament();
 cout<<r+2000;
}*/

//......return & with parameter type function...............


  #include <iostream>
  using namespace std;
int product(int p1, int p2)
  {
  int a=p1*500;
  int b=p2*700;
  return a+b;
  }

int main()
  {
 int prod1,prod2;  // store karne ke liye............

 cout<<"enter quantity of mobile\n";
 cin>>prod1;
 cout<<"enter quantity of pendrive\n";
 cin>>prod2;
 cout<<product (prod1,prod2);
}
