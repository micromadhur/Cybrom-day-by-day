#include<iostream>
using namespace std;
int main()
{
    int s=0,a=1;
    do
    {
        s=s+a;
        cout<<s<<"\t";
        a++;
    }
        while(a<=10);
        cout<<"\n";
        cout<<"total sum="<<s;



}
