#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three different no.\n";
    cin>>a>>b>>c;
    if (a>b && a>c){
    cout<<a<<"is large number";
    }
    else if(b>a && b>c)
    {
    cout<<b<<"is large number";
    }
    else{
    cout<<c<<"is large number";}
}
