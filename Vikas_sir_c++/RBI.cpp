#include<iostream>
using namespace std;
class atmcard
{
    static int c=0;
    public:atmcard()
    {
      c++;
      cout<<c;
    }
};
int atmcard::c=0;  //Static holds the recent value, till it run
int main()
{
    atmcard a1;
    atmcard a2;
    atmcard a3;

}
-
