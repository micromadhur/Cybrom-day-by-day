//WAP to find out latest number among three .
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three number :";
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<a<<" is largest number";
    }else if(b>a && b>c){
        cout<<b<<" is largest number";
    }else{
        cout<<c<<" is largest number";
    }return 0;
}