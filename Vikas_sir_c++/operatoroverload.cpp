#include<iostream>
using namespace std;
class Cybrom{
int a;
public:Cybrom(int b)//Parameterize Constrctor...
{
    a=b;
}
void operator++()//Operator Overloading...
{
    a++;
    cout<<a;
}
 };
 int main()
 {

     Cybrom obj(20);//call
     ++obj;
 }
