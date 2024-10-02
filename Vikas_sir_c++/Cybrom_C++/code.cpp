#include <iostream>
using namespace std;
int main(){
    // float f;
    // cout<<"Enter the temprature in farannite :";
    // cin>>f;
    // cout<<"In "<<f<< " ferrenite " << (f-32)*5/9 << " cescius";
    // return 0;


    cout<<"\n1. WAP to print the square of three digit number individualy.\n2. WAP to swep two number.\n3. WAP to calcule the the simple interest and also show the total amounty after a time .";
    cout<<"\n\nFirst Question solution :-\n";
    int num,a,b,c;
    cout<<"Enter the tree digit number :";
    cin>>num;
    a=num/100;
    b=(num/10)%10;
    c=(num%100)%10;
    cout<<a*a<<"\n"<<b*b<<"\n"<<c*c<<"";
 

cout<<"\n\nSecond Question solution :-";
    int e,d,tmp;
    cout<<"\nEnter the first no. :";
    cin>>e;
    cout<<"Enter the second no. :";
    cin>>d;
    tmp=e;
    e=d;
    d=tmp;
    cout<<"First :"<<e<<" and"<<" Second :"<<d;

    


cout<<"\n\nThird Question solution :-\n";
//This program for calculate simple interest
    float P,R,T,I;
    cout<<"Enter the Principle :";
    cin>>P;
    cout<<"Enter the Rate in persantage :";
    cin>>R;
    cout<<"Enter time in year :";
    cin>>T;
    I=(P*R*T)/100;
    cout<<"\nThe  Simple Interest is :"<<I;
    cout<<"\nThe total Amount is :"<<I+P;
    return 0;
    }