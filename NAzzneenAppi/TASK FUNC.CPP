//W.A.P. TO FIND POWER USING FUNCTION ?
//W.A.P. TO FIND THE GIVEN NUMBER IS PRIME OR NOT PRIME USING FUNCTION?

/*#include <iostream>
using namespace std;
int fun(int base,int power)
{
    int r=1;
  while(power>0)
{
r=r*base;
power--;
}
cout<<r;
}
int main()
{int base,power;
cout<<"enter base \n";
cin>>base;
cout<<"enter power \n";
cin>>power;
fun(base,power);
}*/


/*#include <iostream>
using namespace std;
int fun(int base,int power)
{int r=1;
    for( power; power>0; power--)
{
r=r*base;
}
cout<<r;
}
int main()
{int base,power;
cout<<"enter base \n";
cin>>base;
cout<<"enter power \n";
cin>>power;
fun(base,power);
}*/


#include <iostream>
using namespace std;
int prime(int n)
{
 int c=0;
  for(int m=n-1; m>1; m--)
  {
    if(n%m==0)
    {
        c++;
    }
  }
  if(c==0)
  {
   cout<<"prime";
  }
else
    {
cout<<"not prime";
}
}
int main()
{
    int n;
    cout<<"enter any number\n";
    cin>>n;
prime(n);
}





