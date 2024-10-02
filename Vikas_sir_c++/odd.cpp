#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"Enter a 1st number :";
   cin>>a;
    cout<<"Enter a 2nd number :";
   cin>>b;
    cout<<"Enter a 3rd number :";
   cin>>c;
   if(a>b && a>c)
   {

       cout<<"A is greatest number";
   }

else if(b>a && b>c)
    {
     cout<<"B is greatest number";
}
  else{
    cout<<"c is greatest number";
  }
}
