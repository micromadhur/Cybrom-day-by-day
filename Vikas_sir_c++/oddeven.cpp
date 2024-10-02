#include<iostream>
using namespace std;
int main()
{

    int a;
    cout<<"Enter no. \n";
    cin>>a;
    if(a%2==0)
    {
        cout<<a<<"is even\t";
        }

    else{
        cout<<a<<"is odd\t";
        a++;
    }

     while(a<=10);
}



