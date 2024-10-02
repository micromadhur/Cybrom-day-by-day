// WAP to display the sum of digits of any range
// #include <iostream>
// using namespace std;
// int main(){
//     int num,sum=0;
//     cout<<"Enter the number :";
//     cin>>num;

//     while(num>0){
//         sum+=(num%10);
//         num=num/10;
//     }cout<<"The sum of digits is :"<<sum;
//     return 0;
// }

/*#include <iostream>
using namespace std;
int main(){
    unsigned long long num,sum=0,i=1,j=0;
    cout<<"Enter the number :";
    cin>>num;

    if(num<10){
        cout<<"The sum of digit is :"<<num;
    }else{
    sum=num%10;
    while(num>0){
        j=(num%10);
        num=num/10;
    }cout<<"The sum of digit is :"<<sum+j;
    }
    return 0;
}*/

//WAP to print a digit in reverse order and the no. should be greater then 1;
/*#include <iostream>
using namespace std;
int main(){
    int number,reverse=0,first=0;
    cout<<"The the digit :";
    cin>>number;

    while(number>0){
        first=number%10;
        reverse=(reverse*10)+first;
        number=number/10;
    }cout<<"The reverse form of digit is :"<<reverse;
    return 0;
}*/



