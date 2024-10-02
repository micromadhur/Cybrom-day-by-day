#include<iostream>
using namespace std;
class RBI
{
const int rate,amount;
public: RBI(int rate, int amount):rate(rate),amount(amount) //intialer list for const
{
cout<<rate<<"\n";
cout<<amount<<"\n";
}
};
int main()
{
RBI sbi(8,1000000);
RBI axis(14,100000);
}



#include<iostream>
using namespace std;
class RBI
{
const int rate,amount;
public: RBI(int r, int a):rate(r),amount(a)
{
cout<<rate<<"\n";
cout<<amount<<"\n";
}
};
int main()
{
RBI sbi(8,1000000);
RBI axis(14,100000);
}
