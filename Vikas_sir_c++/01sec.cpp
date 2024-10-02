#include<iostream>
using namespace std;
int main()
{

    int i,F,L;
    cout<<"Enter any no\n";
    cin>>i;
    F=i%10;
    while(i>=0)
    {
        L=i%10;
        i=i/10;
    }
    cout<<"sum of digit="<<F+L;
    }

