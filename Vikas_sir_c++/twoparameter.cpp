#include<iostream>
using namespace std;
class atm
{
public: atm(int cardno)
{
cout<<"CARD NO"<<cardno<<"\n";//intialer list
}
};
class customer:public atm
{
public:customer(int c,int p):atm(c)
{
cout<<"PWD="<<p<<"\n";
}
};
int main()
{
customer paisa(1001,2025);
}
