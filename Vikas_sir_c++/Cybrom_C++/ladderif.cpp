/*Enter meter reading = N
SLABS :
   1. Charge 5rs 1-100
   2. Charge 7rs 101-500
   3. Charge 10rs Avobe 500
   4. Invalid meter reading = Negative
   5. 20% additional charge
*/

#include<iostream>
using namespace std;
int main(){
    double n;
    cout<<"Enter the meter reading :";
    cin>>n;

    if(n>=0 && n<=100){
        cout<<"The total reading is :"<<((n*5)+(n*5)*0.20);
    }else if(n>100 && n<=500){
        cout<<"The total reading is :"<<((n*7)+(n*7)*0.20);
    }else if(n>500){
        cout<<"The total reading is :"<<((n*10)+(n*10)*0.20);   
    }else{
        cout<<"Invalid Meter reading";
    }return 0;
}
