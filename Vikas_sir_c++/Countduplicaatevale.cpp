#include<iostream>
using namespace std;
int main()
{
int a[]={4,3,2,4,5,6,3};
int c=0;
int len=sizeof(a)/sizeof(a[0]);
for(int i=0;i<len;i++)
{
for(int j=i=1;j<len;i++){
if(a[i]==a[j])
{
c++;
}
}
}
cout<<"total duplicate value count="<<c;
}
