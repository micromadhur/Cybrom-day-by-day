#include<iostream>
using namespace std;
int main()
{

    int i,sum=0;
    cout<<"Enter any no\n";
    cin>>i;
    while(i>0)
    {
        sum=sum+(i%10);
        i=i/10;
    }
    cout<<"sum of digit="<<sum;
    }
