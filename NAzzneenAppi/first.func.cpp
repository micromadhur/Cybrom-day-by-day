/*#include <iostream>
using namespace std;
void shop()//no return & without parameter
{
cout<<"mobile\n"<<"pen\n"<<"laptop\n";
}
int main()
{
    for (int i=0; i<=10; i++)

{
shop();

}
}*/


/*#include <iostream>
using namespace std;
void deposit(int amount)//no return & with parameter
{
int a=1000;
cout<<a+amount;
}
int main()
{
int d;
cout<<"enter amount in rupes\n";
cin>>d;
deposit(d);
}*/


#include <iostream>
using namespace std;
void deposit(int pwd,int amount)//server site
{if(pwd==2025)
     {
    if(amount>0)
     {
int a=1000;
cout<<a+amount;
   }
    else
{
    cout<<"invalid amount";
}
     }
else{
   cout<<"wrong pwd\n";
}
}
int main()//client site
 {
int pwd;
int amount;
cout<<"enter pwd\n";
cin>>pwd;
cout<<"enter amount\n";
cin>>amount;
deposit(pwd,amount);
}


