#include  <iostream>
using namespace std;
int main(){
    int a=10,b=3;
    cout<<"\nBefore swepping a :"<<a;
    cout<<"\nBefore swepping b :"<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nAfter swepping a :"<<a;
    cout<<"\nAfter swepping b :"<<b;
    return 0;


}