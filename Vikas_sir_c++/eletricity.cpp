#include<iostream>
using namespace std;
int main(){
  int Units,bill,surcharge;
  cout<<"Enter your eletricity Units :";
  cin>>Units;
  if(Units<=50){
    bill=0.50*Units;
  }
  else if(Units<=150){
    bill=(0.50*50)+(0.75*(Units-50));
  }
  else if(Units<=250){
    bill=(0.50*50)+(0.75*100)+(1.2*(Units-150));
  }
  else{
    bill=(0.50*50)+(0.75*100)+(1.2*150)+(1.5*(Units-250));
  }
  cout<<"Your Final Amount is : "<<bill;
}
