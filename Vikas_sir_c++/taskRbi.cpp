#include<iostream>
using namespace std;
class sbi
{
   public:void show()
   {
       cout<<"sbi\n";
   }

};
class axis
{
    public:void display()
    {
      cout<<"axis\n";
    }
};
class cust:private sbi,private axis
{
    public:void msg()
    {
        sbi::show(); //the way where we access private class agar private hai toh member function ke under hi access kr sakte
        axis::display();

        cout<<"customer\n";
    }
};
int main()
{
    cust c;
    c.msg();

}
